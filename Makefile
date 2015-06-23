# name of the project, the executable will be generated with this name

PROJ_NAME=example-logging

###################################################

export CC=gcc
export CCPP=g++
export LD=g++

export LDFLAGS= -lcflie -lusb-1.0
export CFLAGS= -c -Wall -O3

export ROOT=$(CURDIR)

###################################################
#directory for object files
OBJDIR := build

#include directories
CFLAGS += -I$(ROOT)
CFLAGS += -I$(ROOT)/libcflie/include/cflie

#library directories
LDFLAGS += -L$(ROOT)/libcflie/lib

#source files
SOURCES = example-logging.c CCrazyRadioWrapper.cpp CCrazyflieWrapper.cpp

#object files (with build dir --> $(OBJDIR)/name.o)
OBJS = $(addprefix $(OBJDIR)/,$(subst .c,.o,$(subst .cpp,.o,$(SOURCES))))

###################################################

all: 	$(PROJ_NAME)
	@echo all done

$(PROJ_NAME): $(OBJS) | $(OBJDIR)
	@echo $(OBJECTS)
	@echo linking...
	$(LD) -o $@ $(OBJS) $(LDFLAGS)

$(OBJDIR)/%.o: %.c | $(OBJDIR)
	@echo compiling...
	$(CC) -o $@ $< $(CFLAGS)

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	@echo compiling...
	$(CCPP) -o $@ $< $(CFLAGS)

$(OBJDIR):
	mkdir -p $@

clean:
	rm -f $(OBJDIR)/*.o
	rm -f $(PROJ_NAME)
