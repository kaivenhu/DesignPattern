PROJ_PATH=/home/kevinhu/Project/DesignPattern/SimpleFactory

LIB_NAME=simplefactory

INCLUDE_DIR=$(PROJ_PATH)/include
SUB_DIR := src
SHLIB = lib$(LIB_NAME).so

########### Compile Options #############

INCS_INNER = -I$(INCLUDE_DIR)
LIBS_INNER = -L$(PROJ_PATH)/src -l$(LIB_NAME)

LDFLAGS += $(LIBS_INNER)

CXXFLAGS += -std=c++17 -g -Wall -W -Werror -fPIC $(INCS_INNER)
