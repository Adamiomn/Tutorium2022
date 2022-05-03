a) Your task is to implement a naive map, that stores key-value pairs in an array. Keys must be strings and values must be void pointers. Think about what functions could make sense for a map and which could be useful. Implement them one by one. Once you've written the functions you may write some tests to check for correctness. Alternatively, you can check the solutions for tests and for the functions I came up with. "main.c" in the solutions folder contains all the calls to the tests.
b) Once you've implemented all functions, use valgrind to look for memory leaks.
c) The provided Makefile gives you 3 rules:
	"NaiveMap"		builds the files and executes the tests
	"NaiveMap_vgr"	builds the files, executes the tests and runs valgrind
	"clean"			removes .o and .out files created from the other 2 rules
d) Some code could be repeated. You may find it useful to extract that code into its own helper function in "NaiveMap.c". That way it will only be visible to the map implementation.