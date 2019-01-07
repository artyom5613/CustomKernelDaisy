#
# Makefile for the Goodix gt9xx touchscreen driver.
#
#subdir-ccflags-y += -DDEBUG
EXTRA_CFLAGS += $(call cc-option,-funroll-loops,)

obj-$(CONFIG_TOUCHSCREEN_GT917d)		+= gt9xx.o
obj-$(CONFIG_TOUCHSCREEN_GT917d)		+= gt9xx_update.o
obj-$(CONFIG_TOUCHSCREEN_GT917d)		+= goodix_tool.o
obj-$(CONFIG_TOUCHSCREEN_GT917d)		+= gt9xx_openshort.o
