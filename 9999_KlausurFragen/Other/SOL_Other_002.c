const int i;

// Gib an, ob die Aussagen jeweils wahr (w) oder falsch (f) sind.
//		a) w	i ist ein konstanter Integer
//		b) w	Die Definition von i ist gleichbedeutend zur Definition int const i;
//		c) f	Die Zuweisung i = 5 ist gültig, da i nicht mit einem Wert initialisiert wurde.
//		d) f	Ein Pointer auf i muss vom Typ const int * const sein (z.B. const int * const ptr = &i)
// Erklärung:
//		a) const int ist exakt der Typ eines konstanten Integers.
//		b) const int und int const ist gleichbedeutend. Typ-Definitionen werden von rechts nach links gelesen. const ist eine Ausnahme insofern, dass es auch ganz links geschrieben werden kann und in jenem Fall für das Wort rechts davon gilt (east-const vs. west-const).
//		c) Konstante Typen dürfen nicht verändert werden und dürfen nur bei Definition mit einem Wert belegt werden. i enthält somit einen Garbage-Wert, der nicht verändert werden kann.
//		d) Der Pointer, der auf i zeigt, kann auch verändert werden dürfen. const int * ptr ist somit ebenfalls gültig.