a) Your task is to write code that manipulates a vector structure to add data, remove data, find data etc. The file "VectorTests.h" contains all the function definitions and descriptions for what they should do. Implement them one by one. There are already tests written to assert the correctness of the implementation. "main.c" contains all the calls to the tests commented out. Remove the comments for each function once you've implemented it. This ensures that they work as intended.
b) Once you've implemented all functions, use valgrind to look for memory leaks.
c) The provided Makefile gives you 3 rules:
	"Vector"		builds the files and executes the tests
	"Vector_vgr"	builds the files, executes the tests and runs valgrind
	"clean"			removes .o and .out files created from the other 2 rules
d) Some code could be repeated. You may find it useful to extract that code into its own helper function in "Vector_int.c". That way it will only be visible to the vector implementation.