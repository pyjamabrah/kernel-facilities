#
# Copyright © 2025 pyjamabrah.com. All Rights Reserved.
# Author: Piyush Itankar <piyush@pyjamabrah.com>
#

obj-m := driver.o

KERNELDIR ?= /lib/modules/$(shell uname -r)/build

all: modules

modules clean:
	$(MAKE) -C $(KERNELDIR) M=$(shell pwd) $@