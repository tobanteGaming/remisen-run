.PHONY: default
default: config build

CONFIG ?= Debug
BUILD_DIR ?= build

.PHONY: config
config:
	cmake -S. -GNinja -B$(BUILD_DIR)

.PHONY: build
build:
	cmake --build $(BUILD_DIR)

.PHONY: clean
clean:
	rm -rf $(BUILD_DIR)
