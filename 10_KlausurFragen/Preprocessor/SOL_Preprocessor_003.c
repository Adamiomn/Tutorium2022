#define a b
#define b a

int a = 10;
int b = 2;
printf("%d", a + b);

// Was wird ausgegeben?
//		Antwort: 12
// Erklärung: Der Präprozessor hat zwei Regeln:
//					1. Ersetze jedes a durch b.
//					2. Ersetze jedes b durch a.
//			  Jede Regel kann aber nur 1x pro Wort angewendet werden. Damit wird der Code zuerst zu...
//					int b = 10;				// Regel 1: a wurde zu b
//					int a = 2;				// Regel 2: b wurde zu a
//					printf("%d", b + a);	// Regel 1: a wurde zu b
//											// Regel 2: b wurde zu a
//			  ...und anschließend zu
//					int b = 10;				// Regel 1: a wurde zu b	// Regel 2: b wurde zu a
//					int a = 2;				// Regel 2: b wurde zu a	// Regel 1: a wurde zu b
//					printf("%d", b + a);	// Regel 1: a wurde zu b	// Regel 2: b wurde zu a
//											// Regel 2: b wurde zu a	// Regel 1: a wurde zu b