AR = ar
ARFLAGS = cr
LIB = libbar.a
RM = -rm -rf
OBJS := bar.o aa.o

all: $(LIB)
$(LIB): $(OBJS)
	$(AR) $(ARFLAGS) $@ $(OBJS)
clean:
	@$(RM) $(OBJS) $(LIB) *.bak *~

.PHONY: all clean