INC_DIRS := main \
            dory \
            marlin \
            nemo

SRC_DIRS := main \
            dory \
            marlin \
            nemo

LIB_DIRS := main \
            dory \
            marlin \
            nemo

OUTPUT_DIR := output

CFLAGS += -Wall -Os -g
CLIBS += -lpthread

CUR_DIRS = $(shell pwd)
INC_DIRS := $(patsubst %,$(CUR_DIRS)/%,$(INC_DIRS))
SRC_DIRS := $(patsubst %,$(CUR_DIRS)/%,$(SRC_DIRS))
LIB_DIRS := $(patsubst %,$(CUR_DIRS)/%,$(LIB_DIRS))

OUTPUT_DIR := $(patsubst %,$(CUR_DIRS)/%,$(OUTPUT_DIR))

VPATH := $(SRC_DIRS)

# CROSS_COMPILE ?= arm-linux-gnueabihf-
CROSS_COMPILE ?=
CC = $(CROSS_COMPILE)clang
LD = $(CROSS_COMPILE)ld
AS = $(CROSS_COMPILE)as
NM = $(CROSS_COMPILE)nm
STRIP = strip