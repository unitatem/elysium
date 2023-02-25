FROM ubuntu:jammy-20230126

RUN apt-get update; \
    apt-get install -y \
        vim tree \
        net-tools iputils-ping openssh-client

# RUN useradd --create-home --shell /bin/bash developer
# USER developer
# WORKDIR /home/developer

COPY ssh* /root/.ssh
# RUN chmod 700 /root/.ssh

ENTRYPOINT sleep infinity

