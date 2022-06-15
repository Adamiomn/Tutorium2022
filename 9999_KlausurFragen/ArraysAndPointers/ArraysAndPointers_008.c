int MyFunction(void * const parameter);
void * myPointer1;
float * const myPointer2;

// Gib an, ob die Aussagen jeweils wahr (w) oder falsch (f) sind.
//		a) ☐ Der Parameter von MyFunction könnte sowohl ein einzelner Pointer auf void sein, als auch ein Array von void.
//		b) ☐ Der Aufruf MyFunction(myPointer1) ist gültig.
//		c) ☐ Der Aufruf MyFunction(myPointer2) ist ungültig.
//		d) ☐ Wenn in myPointer1 eine Adresse liegt, so können wir zur nächsten Adresse mit myPointer1 + 1 springen.