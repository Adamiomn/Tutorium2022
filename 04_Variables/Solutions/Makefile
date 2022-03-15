CC = gcc
CFLAGS = -Werror -Wall -Wextra -Wpedantic -Wconversion -Wshadow -Wpointer-arith -Wstrict-prototypes -Wmissing-prototypes -Wunreachable-code -Wredundant-decls -Wold-style-declaration -Wold-style-definition -std=c11 -O3
LIBS = -lm

%.b: %.o
	$(CC) $(CFLAGS) $< -o $@.out $(LIBS)
	./$@.out

%.dang: %.c
	$(CC) $< -o $@.out $(LIBS)
	./$@.out

clean:
	find . -maxdepth 1 -type f ! -name "*.c" ! -name "Makefile" -exec rm {} \;