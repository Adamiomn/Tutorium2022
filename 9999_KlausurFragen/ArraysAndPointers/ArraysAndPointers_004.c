int number = 40;
int * p1 = &number;
int ** p2 = &p1;

// Für diese Aufgabe nehmen wir an, dass die Adresse von number 0x4a3f ist.
// Gib an, ob die Aussagen jeweils wahr (w) oder falsch (f) sind.
//		a) ☐ Der Wert von p1 ist 0x4a3f.
//		b) ☐ Der Wert von *p1 ist 0x4a3f.
//		c) ☐ Der Wert von p2 ist 0x4a3f.
//		d) ☐ Der Wert von *p2 ist 0x4a3f.
//		e) ☐ Der Wert von **p2 ist 40.
//		f) ☐ p2 belegt doppelt so viel Speicher wie p1, da es ein doppelter Pointer ist.
//		g) ☐ Der Ausdruck ++p1 inkrementiert den Wert von Number.