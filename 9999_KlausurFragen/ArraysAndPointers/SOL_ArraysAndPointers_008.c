int MyFunction(void * const parameter);
void * myPointer1;
float * const myPointer2;

// Gib an, ob die Aussagen jeweils wahr (w) oder falsch (f) sind.
//		a) f	Der Parameter von MyFunction könnte sowohl ein einzelner Pointer auf void sein, als auch ein Array von void.
//		b) w	Der Aufruf MyFunction(myPointer1) ist gültig.
//		c) f	Der Aufruf MyFunction(myPointer2) ist ungültig.
//		d) f	Wenn in myPointer1 eine Adresse liegt, so können wir zur nächsten Adresse mit myPointer1 + 1 springen.
// Erklärung:
//		a) Ein Array aus void ist nicht möglich, da der C-Standard keine Größe für void festlegt. Für andere Typen von Pointern (wie etwa int *), wäre diese Aussage jedoch korrekt.
//		b) myPointer1 ist zwar kein konstanter void-Pointer, aber das ist egal. myPointer1 wird in parameter hineinkopiert und parameter selbst darf nicht verändert werden.
//		c) myPointer2 ist zwar kein void-Pointer, aber jeder Pointer darf implizit zu einem void-Pointer gecasted werden.
//		d) Analog zu a) ist dies nicht möglich, da die Größe von void nicht festgelegt ist.