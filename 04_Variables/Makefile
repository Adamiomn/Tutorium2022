CC = gcc
CFLAGS = -Werror -Wall -Wextra -Wpedantic -Wconversion -Wshadow -Wpointer-arith -Wstrict-prototypes -Wmissing-prototypes -Wunreachable-code -Wredundant-decls -Wold-style-declaration -Wold-style-definition -std=c11 -O3
LIBS = -lm

Refactor: Refactor.c
	$(CC) $(CFLAGS) Refactor.c -o Refactor
	./Refactor

Refactor_dang: Refactor.c
	$(CC) Refactor.c -o Refactor_dang
	./Refactor_dang

TypesAndComparisons: TypesAndComparisons.c
	$(CC) $(CFLAGS) TypesAndComparisons.c -o TypesAndComparisons
	./TypesAndComparisons

TypesAndComparisons_dang: TypesAndComparisons.c
	$(CC) TypesAndComparisons.c -o TypesAndComparisons_dang
	./TypesAndComparisons_dang

ConstEverything: ConstEverything.c
	$(CC) $(CFLAGS) ConstEverything.c -o ConstEverything
	./ConstEverything

ConstEverything_dang: ConstEverything.c
	$(CC) ConstEverything.c -o ConstEverything_dang
	./ConstEverything_dang

clean:
	find . -maxdepth 1 -type f ! -name "*.c" ! -name "Makefile" -exec rm {} \;