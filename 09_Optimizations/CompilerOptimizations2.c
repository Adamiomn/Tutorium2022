// Try to optimize the function below.
// Then paste the code compiler explorer (https://godbolt.org) and observe the assembly code generated. Now select clang as compiler and add -O1 to the compiler options to toggle optimization level 1. Watch the magic.
// Interestingly, this doesn't work on gcc.
// Example was taking from Matt Godbolt's talk at CppCon 2017: https://www.youtube.com/watch?v=bSkpMdDe4g4

unsigned sum1(short num) {
	unsigned result = 0;
	for (short i = 1; i < num; ++i)
	{
		result += i;
	}
    return result;
}

unsigned sum2(short num) {
}
