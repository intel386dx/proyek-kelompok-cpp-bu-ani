COMPILER_EXEC = g++
COMPILER_FLAGS = -O0 -static -fpermissive
COMPILE_DIR = ../dist

.PHONY: all

all: functional procedural

$(COMPILE_DIR):
	mkdir $(COMPILE_DIR)

%: %.cpp $(COMPILE_DIR)
	$(COMPILER_EXEC) $(COMPILER_FLAGS) $< -o ../dist/$@