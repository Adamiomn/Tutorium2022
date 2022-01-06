CC = gcc
CFLAGS = -Werror -Wall -Wextra -Wpedantic -std=c11
LIBS = -lm


%.p: %.c
	$(CC) $(CFLAGS) -E $< -o $@.txt $(LIBS)

%.b: %.o
	$(CC) $(CFLAGS) $< -o $@.out $(LIBS)
	./$@.out

%.dang: %.c
	$(CC) $< -o $@.out $(LIBS)
	./$@.out


clean:
	-rm *.o *.out *.txt

.PHONY: clean
.PRECIOUS: %.o