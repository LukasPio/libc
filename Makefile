CC = gcc

CFLAGS = -std=c11 -Wall -Wextra -Wpedantic -Iinclude

SRC_DIR = src
EXAMPLE_DIR = examples
BUILD_DIR = build

LIB_SRC = $(wildcard $(SRC_DIR)/*.c)
EXAMPLES = $(wildcard $(EXAMPLE_DIR)/*.c)
TARGETS = $(patsubst $(EXAMPLE_DIR)/%.c,$(BUILD_DIR)/%,$(EXAMPLES))

.PHONY: all clean

all: $(TARGETS)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/%: $(EXAMPLE_DIR)/%.c $(LIB_SRC) | $(BUILD_DIR)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf $(BUILD_DIR)