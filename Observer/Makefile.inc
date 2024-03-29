MKFILE_PATH := $(abspath $(lastword $(MAKEFILE_LIST)))
CURRENT_DIR := $(realpath $(patsubst %/,%,$(dir $(MKFILE_PATH))))
PROJ_PATH=$(CURRENT_DIR)

LIB_NAME=observer

INCLUDE_DIR=$(PROJ_PATH)/include
SUB_DIR := src
SHLIB = lib$(LIB_NAME).so

########### Compile Options #############

INCS_INNER = -I$(INCLUDE_DIR)
LIBS_INNER = -L$(PROJ_PATH)/src -l$(LIB_NAME)

LDFLAGS += $(LIBS_INNER) -Wl,-rpath,$(PROJ_PATH)/src

CXXFLAGS += -std=c++17 -g -Wall -W -Werror -fPIC $(INCS_INNER)
