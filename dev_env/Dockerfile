# Setup for RPi Zero W

FROM ubuntu:20.04
# focal-20230126, focal

RUN apt-get update; \
    apt-get install -y \
        vim tree git \
        curl gnupg \
        net-tools iputils-ping openssh-client \
        g++-arm-linux-gnueabi

# https://gist.github.com/diegopacheco/10f4d7be75574e53e91c49f19bf2613f
RUN curl -fsSL https://bazel.build/bazel-release.pub.gpg | gpg --dearmor > bazel.gpg; \
    mv bazel.gpg /etc/apt/trusted.gpg.d/; \
    echo "deb [arch=amd64] https://storage.googleapis.com/bazel-apt stable jdk1.8" | tee /etc/apt/sources.list.d/bazel.list

RUN apt-get update; \
    apt-get install -y \
        bazel

RUN useradd --create-home --shell /bin/bash developer
USER developer
WORKDIR /home/developer

COPY --chown=developer ssh* .ssh
# RUN chmod 700 .ssh

ENTRYPOINT sleep infinity

