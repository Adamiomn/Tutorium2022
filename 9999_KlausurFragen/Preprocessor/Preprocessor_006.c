// In der Datei main.c stehen von Zeile 10 bis Zeile 12 diese drei Zeilen.

#define PTR_MSG(ptr) printf("Error at in file " __FILE__ " at line " __LINE__ ", pointer " #ptr " is NULL"); // Zeile 10
int * ptr = NULL;	// Zeile 11
PTR_MSG(ptr);	// Zeile 12

// Was wird ausgegeben?
//		a) Error in file main.c at line 12, pointer ptr is NULL
//		b) Error in file main.c at line 10, pointer ptr is NULL
//		c) Error in file main.c at line 12, pointer NULL is NULL
//		d) Error in file main.c at line 10, pointer NULL is NULL
//		e) Gar nichts, es kommt zu einem Kompilierfehler