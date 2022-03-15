// Was ist das Resultat des folgenden Ausdrucks?

(~1 & 1) * 3 + 20 % (64 >> 2) / 3

// Antwort: 1
// Erklärung:
//		a) Wir werten zunächst die Klammern aus.
//				~1 & 1
//				Dieser Ausdruck ergibt 0, da die Bits mit ihrem Gegenteil verknüpft werden. Das wird übrigens vom Compiler verwendet, um einen Wert zu löschen, weil es sehr schnell ist.
//				64 >> 2 = 16
//		b) Damit bleibt:
//				0 * 3 + 20 % 16 / 3
//				20 % 16 / 3
//		c) Wir werten von links nach rechts aus, da die Operatoren gleichwertig und links-nach-rechts-assoziativ sind.
//				20 % 16 = 4
//				4 / 3 = 1 (integer division!)
