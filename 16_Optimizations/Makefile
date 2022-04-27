CC = gcc
CFLAGS = -Werror -Wall -Wextra -Wpedantic -std=c11
LDFLAGS = -lm



# Compile and execute
%.b: %.o Benchmarker.o
	$(CC) $(CFLAGS) $< Benchmarker.o -o $@.out $(LDFLAGS)
	./$@.out

# Compile and execute optimized
%.bopt: %.o Benchmarker.o
	$(CC) $(CFLAGS) -O3 $< Benchmarker.o -o $@.out $(LDFLAGS)
	./$@.out

# Compile and exectue without extra warnings
%.dang: %.c Benchmarker.c
	$(CC) $< Benchmarker.c -o $@.out $(LDFLAGS)
	./$@.out

# Compile and execute with gprof
%.prof: %.c Benchmarker.o
	$(CC) -pg $< Benchmarker.o -o $@.out $(LDFLAGS)
	./$@.out
	gprof ./$@.out gmon.out > profile-data.txt

# Compile and execute with cachegrind (and branch predictor simulation)
%.cgr: %.c Benchmarker.o
	$(CC) $< Benchmarker.o -g -o $@.out $(LDFLAGS)
	valgrind --tool=cachegrind --cachegrind-out-file=$@.cg_annotate.out --branch-sim=yes ./$@.out
	cg_annotate $@.cg_annotate.out $(shell pwd)/$<

# Clean up any files
clean:
	-rm *.o *.out *.out.*

.PHONY: clean
.PRECIOUS: %.o