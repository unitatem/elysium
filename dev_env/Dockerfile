# Setup for RPi Zero W

FROM ubuntu:20.04
# focal-20230126, focal

RUN apt-get update; \
    apt-get install -y \
        vim tree \
        net-tools iputils-ping openssh-client \
        g++-arm-linux-gnueabi

# RUN useradd --create-home --shell /bin/bash developer
# USER developer
# WORKDIR /home/developer

COPY ssh* /root/.ssh
# RUN chmod 700 /root/.ssh

ENTRYPOINT sleep infinity

