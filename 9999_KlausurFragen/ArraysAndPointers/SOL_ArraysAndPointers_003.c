int * ptrNumber = 0;

// Gib an, ob die Aussagen jeweils wahr (w) oder falsch (f) sind.
//		a) w	Die Zuweisung ist gültig.
//		b) f	Der Ausdruck ptrNumber == NULL ergibt false.
//		c) w	Die Anweisung *ptrNumber = 10 ergibt einen Segmentation Fault (unerlaubter Speicherzugriff).
// Erklärung:
//		a) 0 wird implizit in einen NULL-Pointer umgewandelt und ist die einzige Umwandlung von Integer zu Pointer, welche vom Standard garantiert wird.
//		b) siehe a), ptrNumber enthält nach der Zuweisung einen NULL-Pointer
//		c) Da NULL nicht dereferenziert werden darf, erhalten wir einen Segmentation fault. Interessanterweise ist &*NULL vom Standard erlaubt.