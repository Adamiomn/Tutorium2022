CC = gcc
CFLAGS = -Werror -Wall -Wextra -Wpedantic -std=c11
LDFLAGS = -lm



%.b: %.o
	$(CC) $(CFLAGS) $< -o $@.out $(LDFLAGS)
	./$@.out

%.dang: %.c
	$(CC) $< -o $@.out $(LDFLAGS)
	./$@.out

%.vgr: %.c
	$(CC) $< -g -o $@.out $(LDFLAGS)
	valgrind --tool=memcheck ./$@.out


clean:
	-rm *.o *.out

.PHONY: clean
.PRECIOUS: %.o