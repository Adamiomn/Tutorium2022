#define VARPRINT(x) printf(#x ": %s\n", x)
int x = 10;
VARPRINT(x);

// Was wird ausgegeben?
//		a) 10: 10
//		b) x: 10
//		c) x: x
//		d) Gar nichts, es kommt zu einem Kompilierfehler