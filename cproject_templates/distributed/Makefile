CC=clang
CFLAGS :=-Wall
DEBUG =y

ifeq ($(DEBUG), y)
	CFLAGS += -g
else
	CFLAGS += -O2
endif

SUBDIRS := bar foo
LIBS := foo/libfoo.a bar/libbar.a

LDFLAGS = $(LIBS)
RM = -rm -rf

OBJS := main.o
SRCS = $(subst .o,.c,$(OBJS))

target = bin/out.exe
MAKE = make

all: $(target)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -I ./include/ -c $^

$(target): $(OBJS)
	@for dir in $(SUBDIRS);\
		do $(MAKE) -C $$dir all || exit 1;\
	done
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

clean:
	@for dir in $(SUBDIRS);\
		do make -C $$dir clean || exit 1;\
	done
	@$(RM) *.o *.bak *~
	@$(RM) ./bin/* || exit 1

.PHONY: all clean