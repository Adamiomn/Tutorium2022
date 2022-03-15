// Gegeben sei das folgende (vollständige) Programm:

#include <stdio.h>

int COUNTER;
void * ITEM;

int main(void)
{
	int COUNTER = 5;
	void * item;
	printf("%d", COUNTER);
	printf("%p", item);
	return 0;
}

// Gib an, ob die Aussagen jeweils wahr (w) oder falsch (f) sind.
//		a) ☐ Die Variable COUNTER in Zeile 5 hat zum Beginn des Programms den Wert 0.
//		b) ☐ Die Variable ITEM in Zeile 6 hat zum Beginn des Programms einen undefinierten Wert.
//		c) ☐ Das print-Statement in Zeile 12 gibt garantiert 5 aus.
//		d) ☐ Das print-Statement in Zeile 13 gibt garantiert den Pointer-Wert des NULL-Pointers aus.