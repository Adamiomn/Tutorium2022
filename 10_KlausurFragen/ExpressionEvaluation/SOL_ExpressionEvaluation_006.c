// Welchen Wert hat x am Ende des Ausdrucks?

unsigned x = -1;
x += x;
x += 4;

// Wähle die richtige Antwort aus:
//		b) 2
// Erklärung:
//		a) unsigned x = -1 ergibt einen Underflow, x hat jetzt den Wert UINT_MAX
//		b) x += x ergibt einen Overflow, x hat jetzt den Wert UINT_MAX + 1
//		c) x += 4 ergibt wiederum einen Overflow, x jetzt den Wert 2
// Tatsächlich kann man "unsigned" ignorieren und das Ergebnis erst am Ende "uminterpretieren". Damit vereinfacht sich die Rechnung:
//		a) x = -1		-> x = -1
//		b) x += -1		-> x = -2
//		c) x += 4		-> x = 2