COMPILER_EXEC = gcc
COMPILER_FLAGS = -O0 -static -fpermissive

all: functional.cpp procedural.cpp

%.cpp: %
# $< here means: the input filename
# $@ here means: the output filename

# Feel free to adjust the command line below according to your setup
	$(COMPILER_EXEC) $(COMPILER_FLAGS) $< -o $@