// Gegeben seien die folgenden Arrays:

int vla[] = {2, 4, -1};
int fsa[5] = {7, 0, 3};

// Beantworte die folgenden Fragen:
//		a) Wie viele Elemente sind in vla enthalten?
//				Antwort: 3, denn die Länge wird aus der Länge des Array-Literals deduziert.
//		b) Welchen Wert hat vla[2]?
//				Antwort: -1, denn es ist das dritte Element (zero-indexing!)
//		c) Wie viele Elemente sind in fsa enthalten?
//				Antwort: 5, denn es ist explizit angegeben
//		d) Welchen Wert hat fsa[0]?
//				Antwort: 0, denn es ist das erste Element (zero-indexing!)
//		e) Welchen Wert hat fsa[4]?
//				Antwort: 0, denn alle Elemente, welche nicht explizit angegeben wurden, werden mit 0 initialisiert, vorausgesetzt es wurde zumindest ein Element explizit bei der Initialierung gesetzt.