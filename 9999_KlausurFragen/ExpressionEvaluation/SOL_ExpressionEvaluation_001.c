// Was ist das Resultat des folgenden Ausdrucks?

(3 << 1 & 1) * (42 & 13) + 5 / 4

// Antwort: 1
// Erklärung:
//		a) Zuerst werten wir die erste Klammer aus:
//				3 << 1 & 1
//				Der Leftshift-Operator hat höhere Präzendenz.
//					i)  3 << 1 = 9
//					ii) 9 & 1 = 0
//		b) Damit erhalten wir:
//				0 * (42 & 13) + 5 / 4
//		c) Wir müssen die Klammer nicht mehr auswerten, da wir bereits mit 0 multiplizieren. Es bleibt noch übrig:
//				5 / 4
//		d) Dies ist eine Integer-Division. Wir werfen den Rest weg.
//				5 / 4 = 1 und 1 Rest
//				-> 5 / 4 = 1