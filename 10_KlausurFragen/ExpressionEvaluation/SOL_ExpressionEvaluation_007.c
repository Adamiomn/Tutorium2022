// Welchen Wert hat b am Ende des Code-Ausschnitts?

int b = 2;
b *= b++;

// Richtige Antwort:
//		b) Nicht definiert (undefined behaviour)
// Erklärung:
//		*= ist kein sogenannter "Sequenz-Punkt", was lediglich bedeutet, dass die Ausführ-Reihenfolge nicht durch den Standard festgelegt ist.
//		siehe https://en.wikipedia.org/wiki/Sequence_point