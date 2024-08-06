GCC = gcc
MAIN = arq.c
LIB = util.h


all:
	@$(GCC) $(MAIN) $(LIB) -o bin
