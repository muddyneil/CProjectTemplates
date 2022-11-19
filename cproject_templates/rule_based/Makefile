TARGET := out.exe

include mk_rules.mk

# If these options are not used , a warning will be issued
# CFLAGS += $(patsubst %,-I%,$(INC_DIRS))
# CFLAGS += $(patsubst %,-L%,$(LIB_DIRS))

CFILES := $(foreach dirs,$(SRC_DIRS),$(wildcard $(dirs)/*.c))
CFILES_NO_DIR := $(notdir $(CFILES))

COBJS := $(patsubst %.c,%.o,$(CFILES_NO_DIR))
COBJS := $(patsubst %,$(OUTPUT_DIR)/%,$(COBJS))

.PHONY : all clean $(TARGET)

.IGNORE : clean

all: CHECKDIR $(TARGET)

CHECKDIR:
	mkdir -p $(OUTPUT_DIR)

$(TARGET) : $(COBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(COBJS) : $(OUTPUT_DIR)/%.o:%.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	-rm -f $(OUTPUT_DIR)/*.o
	-rm -f $(TARGET)