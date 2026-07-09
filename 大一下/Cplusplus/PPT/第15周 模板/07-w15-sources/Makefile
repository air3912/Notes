CXX ?= c++
CXXFLAGS ?= -std=c++11 -Wall -Wextra
BUILD_DIR ?= build

SOURCES := $(wildcard *.cpp)
TARGETS := $(patsubst %.cpp,$(BUILD_DIR)/%,$(SOURCES))
EXAMPLES := $(patsubst %.cpp,%,$(SOURCES))
REQUESTED_SOURCES := $(filter $(SOURCES),$(MAKECMDGOALS))

.DEFAULT_GOAL := list

.PHONY: all list run clean $(EXAMPLES)
ifneq ($(REQUESTED_SOURCES),)
.PHONY: $(REQUESTED_SOURCES)
endif

all: $(TARGETS)

$(BUILD_DIR):
	mkdir -p $@

$(BUILD_DIR)/%: %.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(EXAMPLES): %: $(BUILD_DIR)/%
	@$<

ifneq ($(REQUESTED_SOURCES),)
$(REQUESTED_SOURCES): %.cpp: | $(BUILD_DIR)
	@$(CXX) $(CXXFLAGS) $@ -o $(BUILD_DIR)/$*
	@$(BUILD_DIR)/$*
endif

list:
	@printf 'Available examples:\n'
	@for f in $(SOURCES); do printf '  %s\n' "$$f"; done
	@printf '\nCommands:\n'
	@printf '  make 03_class_template\n'
	@printf '  make all\n'
	@printf '  make run FILE=03_class_template.cpp\n'
	@printf '  make run EXAMPLE=03_class_template\n'
	@printf '  make clean\n'

ifneq ($(FILE),)
RUN_TARGET := $(BUILD_DIR)/$(basename $(notdir $(FILE)))
else ifneq ($(EXAMPLE),)
RUN_TARGET := $(BUILD_DIR)/$(EXAMPLE)
endif

run:
ifndef RUN_TARGET
	$(error Please set FILE=xxx.cpp or EXAMPLE=xxx. Run `make list` to see examples)
endif
	@$(MAKE) --no-print-directory $(RUN_TARGET)
	@$(RUN_TARGET)

clean:
	rm -rf $(BUILD_DIR)
