#
# This is a project Makefile. It is assumed the directory this Makefile resides in is a
# project subdirectory.
#
ifndef APP_NAME
APP_NAME := app-fireware
endif
PROJECT_NAME= $(APP_NAME)

include $(IDF_PATH)/make/project.mk

