AR = ar
ARFLAGS = cr
LIB = libfoo.a
RM = -rm -rf
OBJS := foo.o bb.o

all: $(LIB)
$(LIB): $(OBJS)
	$(AR) $(ARFLAGS) $@ $(OBJS)

clean:
	@$(RM) $(OBJS) $(LIB) *.bak *~
.PHONY: all clean