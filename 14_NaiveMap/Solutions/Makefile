CC = gcc
CFLAGS = -Werror -Wall -Wextra -Wpedantic -Wconversion -Wshadow -std=c11
LIBS = -lm

NaiveMap: main.c NaiveMapTests.c NaiveMap.c
	$(CC) $(CFLAGS) $^ -o NaiveMap.out
	./NaiveMap.out

NaiveMap_vgr: main.c NaiveMapTests.c NaiveMap.c
	$(CC) $(CFLAGS) $^ -g -o NaiveMap.out
	valgrind --tool=memcheck --leak-check=full ./NaiveMap.out

clean:
	-rm *.o *.out

.PHONY: clean
.PRECIOUS: %.o