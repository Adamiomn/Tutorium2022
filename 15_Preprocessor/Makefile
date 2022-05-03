CC = gcc
CFLAGS = -Werror -Wall -Wextra -Wpedantic -std=c11
LDFLAGS = -lm


%.p: %.c
	$(CC) $(CFLAGS) -E $< -o $@.txt $(LDFLAGS)

%.b: %.o
	$(CC) $(CFLAGS) $< -o $@.out $(LDFLAGS)
	./$@.out

%.dang: %.c
	$(CC) $< -o $@.out $(LDFLAGS)
	./$@.out


clean:
	-rm *.o *.out *.txt

.PHONY: clean
.PRECIOUS: %.o