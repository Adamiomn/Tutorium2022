// Was ist das Resultat des folgenden Ausdrucks?

(((int)NULL + 1) << 4) % 11 % 2

// Antwort: 1
// Erklärung: 
//			a) Wir lösen zuerst die Klammern auf.
//					(int)NULL
//					NULL ist 0 und wird mit (int) auf einen int gecasted.
//					0 + 1 = 1
//					1 << 4 = 16
//			b) Wir werten nun die Modulo-Rechnung aus. Der Modulo-Operator ist links-nach-rechts-assoziativ (wir werten von links nach rechts aus). Achtung! Das ist nicht bei allen Operatoren so.
//					16 % 3 = 5
//					5 % 2 = 1