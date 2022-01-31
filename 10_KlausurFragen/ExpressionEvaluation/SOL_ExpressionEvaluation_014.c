// Was ist das Resultat des folgenden Ausdrucks?

(2 ? 0 : 1) ? 0 ? 4 : -10 : 3

// Antwort: 3
// Erklärung:
//		a) Wir formatieren den Ausdruck etwas anders.
//				(2 ? 0 : 1) ?
//				(0 ? 4 : -10) :
//				3
//		b) Wir lösen die Klammern.
//				2 ? 0 : 1 = 0
//				0 ? 4 : -10 = -10
//		c) Damit bleibt...
//				0 ? -10 : 3 = 3