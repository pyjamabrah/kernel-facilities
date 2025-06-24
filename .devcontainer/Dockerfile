#
# Copyright © 2025 pyjamabrah.com. All Rights Reserved.
# Author: Piyush Itankar <piyush@pyjamabrah.com>
#

FROM mcr.microsoft.com/vscode/devcontainers/base:ubuntu-20.04

ENV DEBIAN_FRONTEND=noninteractive

RUN sudo apt-get update
RUN sudo apt-get install -y linux-headers-$(uname -r) gawk wget git diffstat unzip texinfo gcc-multilib build-essential chrpath socat xterm ncurses-dev

# terminal colors with xterm
ENV TERM xterm
