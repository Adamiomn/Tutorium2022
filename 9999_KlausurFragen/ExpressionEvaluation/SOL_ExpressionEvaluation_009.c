bool f = ((1 << 1) == 2) & ((1 << 2) > 4);

// Welchen Wert hat f?
//		b) false
// Erklärung:
//		a) Wir werten zuerst die Klammern aus.
//				1 << 1 = 2
//				1 << 2 = 4
//		b) Wir werten die nächsten Klammern aus.
//				2 == 2 = true (1)
//				4 > 4 = false (0)
//		c) Wir werten das bitwise & aus.
//				1 & 0 = 0 (false)