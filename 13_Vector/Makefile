CC = gcc
CFLAGS = -Werror -Wall -Wextra -Wpedantic -std=c11
LIBS = -lm

Vector: main.c VectorTests.c Vector_int.c
	$(CC) $(CFLAGS) $^ -o Vector.out
	./Vector.out

Vector_vgr: main.c VectorTests.c Vector_int.c
	$(CC) $(CFLAGS) $^ -g -o Vector_vgr.out
	valgrind --tool=memcheck --leak-check=full ./Vector_vgr.out

clean:
	-rm *.o *.out

.PHONY: clean
.PRECIOUS: %.o