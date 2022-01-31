void f(int x);

// Gib an, ob die Aussagen jeweils wahr (w) oder falsch (f) sind.
//		a) w	f ist die Deklaration einer Funktion
//		b) f	f ist die Definition einer Funktion
//		c) f	f ist die Deklaration und Definition einer Funktion
//		d) w	Der obige Ausdruck ist äquivalent zu extern void f(int x);
// Erklärung:
//		a) Endet eine Funktion mit ); so ist es eine Deklaration. Kommt nach der schließenden runden Klammer der Parameter noch ein Code-Block, so ist es eine Definition.
//		b) Da es eine Deklaration ist, ist es mit Sicherheit keine Definition.
//		c) Da es eine Deklaration ist, ist es mit Sicherheit keine Definition und Deklaration.
//		d) Deklarationen von Funktionen sind automatisch "extern".