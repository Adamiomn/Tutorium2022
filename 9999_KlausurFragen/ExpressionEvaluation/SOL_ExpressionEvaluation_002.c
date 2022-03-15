// Was ist das Resultat des folgenden Ausdrucks? UINT_MAX ist der maximale Wert eines unsigned Integers.

UINT_MAX ^ 1 ? 3 : -1

// Antwort: 3
// Erklärung:
//		a) Der XOR-Operator hat eine höhere Präzedenz als der ternäre Operator, wir werten ihn also zuerst aus.
//				UINT_MAX ^ 1
//		b) Wir wissen vermutlich nicht, welche Bits von UINT_MAX 1 und welche 0 sind. Aber wir können uns sicher sein, dass nicht die gleichen Bits 1 wie bei der Zahl 1.
//				(UINT_MAX ^ 1) != 0
//		c) Da der Ausdruck nicht 0 ist, ist der zweite Operand des ternären Operators (3) das Resultat des Ausdrucks.
//				true ? 3 : -1
//				3