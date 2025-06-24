# Linux Kernel Facilities and Helper functions

This repository is a sandbox environment for the course on `Linux Kernel Facilities and Helper Functions`.

The Linux kernel doesn't use the Standard C Library and implements the functions as it's own modern libraries. This course is focused on exploring the facilities and helper functions the kernel provides to manage data and different activities from the driver.

# Environment Setup

```shell
sudo apt update -y
sudo apt install -y linux-headers-$(uname -r)
sudo apt install -y gawk wget git diffstat unzip texinfo gcc-multilib build-essential chrpath socat xterm ncurses-dev kmod
```

# Building and Loading driver

- Build: `make`
- Load: `sudo insmod driver.ko`
- Remove: `sudo rmmod driver`
- Clean: `make clean`

# Documentation and Code references
- Linux Kernel: https://github.com/torvalds/linux
- Kernel documentation: https://github.com/torvalds/linux/tree/master/Documentation

# License

```
All rights reserved. For more information contact support@pyjamabrah.com
```
