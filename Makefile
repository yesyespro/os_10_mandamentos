GCC = gcc
MAIN = arq.c
LIB = lib/util.h
OUTPUT = Bin/Memoria

all:
	@$(GCC) $(MAIN) $(LIB) -o $(OUTPUT)
