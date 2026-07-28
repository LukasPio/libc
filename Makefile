CC = gcc

CFLAGS = -Wall -Wextra -Wpedantic -Iinclude

SRC_DIR = src
EXAMPLE_DIR = examples
BUILD_DIR = build

SRC = $(wildcard $(SRC_DIR)/*.c)
EXAMPLES = $(wildcard $(EXAMPLE_DIR)/*.c)
TARGETS = $(patsubst $(EXAMPLE_DIR)/%.c,$(BUILD_DIR)/%,$(EXAMPLES))

.PHONY: all clean

all: $(TARGETS)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)/%: $(EXAMPLE_DIR)/%.c $(SRC) | $(BUILD_DIR)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -rf $(BUILD_DIR)