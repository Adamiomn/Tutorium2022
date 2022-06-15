int number = 40;
int * p1 = &number;
int ** p2 = &p1;

// Für diese Aufgabe nehmen wir an, dass die Adresse von number 0x4a3f ist.
// Gib an, ob die Aussagen jeweils wahr (w) oder falsch (f) sind.
//		a) w	Der Wert von p1 ist 0x4a3f.
//		b) f	Der Wert von *p1 ist 0x4a3f.
//		c) f	Der Wert von p2 ist 0x4a3f.
//		d) w	Der Wert von *p2 ist 0x4a3f.
//		e) w	Der Wert von **p2 ist 40.
//		f) f	p2 belegt doppelt so viel Speicher wie p1, da es ein doppelter Pointer ist.
//		g) f	Der Ausdruck ++p1 inkrementiert den Wert von Number.
// Erklärung:
//		a) p1 wurde die Adresse von number zugewiesen, welche 0x4a3f ist.
//		b) *p1 ist der Inhalt der Adresse von p1, welcher 40 ist.
//		c) p2 ist die Adresse von p1, welche sicher nicht 0x4a3f ist, da dort bereits number liegt.
//		d) *p2 ist der Inhalt von p1, welcher 0x4a3f ist (siehe a)).
//		e) **p2 ist der Inhalt von *p1, was der Inhalt von number ist, was wiederum 40 ist.
//		f) Jeder Pointer ist gleich groß.
//		g) p1 ist ein Pointer, ++p1 inkrementiert daher den Pointer, nicht den Wert, auf den p1 zeigt (Pointerarithmetik).