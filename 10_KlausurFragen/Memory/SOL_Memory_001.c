malloc(sizeof(int) * 4);

// Gib an, ob die Aussagen jeweils wahr (w) oder falsch (f) sind.
//		a) f	Der obige Ausdruck gibt einen int-Pointer auf einen Speicherblock in der Größe von 4 Integern zurück.
//		b) w	Der obige Ausdruck kann NULL zurückgeben.
//		c) f	Der obige Ausdruck gibt einen void-Pointer der Größe sizeof(int) * 4 zurück.
//		d) f	Der obige Ausdruck reserviert Speicher und setzt alle Bits des Speichers auf 0.
//		e) w	Der obige Ausdruck reserviert abhängig vom Betriebssystem unterschiedlich viel Speicher.
//		f) w	Wenn der obige Ausdruck die vollständige Anweisung ist, so gibt es immer einen Memory-Leak.
// Erklärung:
//		a) malloc gibt immer einen void-Pointer zurück.
//		b) malloc kann NULL zurückgeben, falls die Speicherreservierung fehlschlägt.
//		c) malloc gibt zwar einen void-Pointer zurück, dieser hat aber immer dieselbe Länge - die Länge eines Pointers.
//		d) malloc modifiziert den reservierten Speicher nicht.
//		e) Abhängig von der Größe von int (welche vom Betriebssystem abhängig ist), wird unterschiedlich viel Speicher reserviert.
//		f) Da der Pointer, der von malloc zurückgegeben wird, nicht abgespeichert wird, kann er auch nicht benutzt werden, um den Speicher mittels free(...) wieder freizugeben.