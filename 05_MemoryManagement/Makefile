CC = gcc
CFLAGS = -Werror -Wall -Wextra -Wpedantic -std=c11
LIBS = -lm



%.b: %.o
	$(CC) $(CFLAGS) $< -o $@.out $(LIBS)
	./$@.out

%.dang: %.c
	$(CC) $< -o $@.out $(LIBS)
	./$@.out

%.vgr: %.c
	$(CC) $< -g -o $@.out $(LIBS)
	valgrind --tool=memcheck --leak-check=full ./$@.out


clean:
	-rm *.o *.out

.PHONY: clean
.PRECIOUS: %.o
