CC = gcc
CFLAGS = -Werror -Wall -Wextra -Wpedantic -Wconversion -Wshadow -Wpointer-arith -Wunreachable-code -Wredundant-decls -Wold-style-declaration -Wold-style-definition -std=c11 -O3
LIBS = -lm

%.b: %.c
	$(CC) $(CFLAGS) $? -o $@ $(LIBS)
	./$@

%.d: %.c
	$(CC) $? -o $@ $(LIBS)
	./$@

clean:
	find . -maxdepth 1 -type f ! -name "*.c" ! -name "Makefile" -exec rm {} \;