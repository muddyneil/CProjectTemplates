CC = clang
CFLAGS = -c -Wall
TOPDIR = $(shell pwd)
OBJDIR = $(TOPDIR)/obj/
SRCDIR = $(TOPDIR)/src/
INCDIR = $(TOPDIR)/inc/
BINDIR = $(TOPDIR)/bin/
BIN = $(BINDIR)out.exe

SRCLIST = $(wildcard $(SRCDIR)*.c)
OBJTEMP = $(basename $(SRCLIST))
OBJTEMP1 = $(addsuffix .o ,$(OBJTEMP))
OBJTEMP2 = $(notdir $(OBJTEMP1))
OBJ = $(addprefix $(OBJDIR),$(OBJTEMP2))

all:CHECKDIR out

CHECKDIR:
	mkdir -p $(OBJDIR) $(BINDIR)

out:$(BIN)

$(BIN):$(OBJ)
	$(CC) $^ -o $@

$(OBJDIR)%.o:$(SRCDIR)%.c
	$(CC) $(CFLAGS) $^ -o $@

.PHONY:clean
clean:
	rm -rf $(OBJDIR)* $(BINDIR)*