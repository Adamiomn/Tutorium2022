int f(int numbers[]);
int g(int * numbers);

// Gib an, ob die Aussagen jeweils wahr (w) oder falsch (f) sind.
//		a) f	Die Größe des Arrays ist in der Definition von f bekannt.
//		b) w	g akzeptiert sowohl Pointer auf int, als auch Arrays von ints.
//		c) w	Die Deklarationen von f und g sind (bis auf den Funktionsnamen) gleichbedeutend.
// Erklärung:
//		a) Die Größe eines Arrays geht bei der Übergabe an eine Funktion verloren, da ein Array zu einem Pointer zerfällt.
//		b) Da Arrays zu Pointern zerfallen, kann numbers sowohl Pointer auf int als auch Array von ints sein.
//		c) Da Arrays zu Pointern zerfallen, sind beide Deklarationen gleichbedeutend.