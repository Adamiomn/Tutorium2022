#include <stdio.h>
#define VARPRINT(x) printf(#x ": %d", x)

int main(void)
{
	int x = 10;
	VARPRINT(x);
	return 0;
}

// Was wird ausgegeben?
//		a) 10: 10
//		b) x: 10
//		c) x: x
//		d) Gar nichts, es kommt zu einem Kompilierfehler