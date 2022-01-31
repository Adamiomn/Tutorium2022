// Gegeben sei das folgende Programm:

int COUNTER;
void * ITEM;

int main()
{
	int COUNTER = 5;
	void * item;
	printf("%d", COUNTER);
	printf("%p", item);
	return 0;
}

// Gib an, ob die Aussagen wahr (w) oder falsch (f) sind.
//		a) w Die Variable COUNTER in Zeile 3 hat zum Beginn des Programms den Wert 0.
//		b) f Die Variable ITEM in Zeile 4 hat zum Beginn des Programms einen undefinierten Wert.
//		c) w Das print-Statement in Zeile 10 gibt garantiert 5 aus.
//		d) w Das print-Statement in Zeile 11 gibt garantiert 0x0 (0 in Hexadezimal) aus.
// Erklärung:
//		a) COUNTER ist eine globale Variable, wird also mit dem Standardwert für int initialisiert, welcher 0 ist.
//		b) ITEM ist eine globale Variable, wird also mit dem Standardwert für void-pointer initialisiert, welcher NULL ist (funktioniert äquivalent mit jedem anderen Typ von Pointer).
//		c) COUNTER shadowed die globale Variable, deshalb wir 5 ausgegeben.
//		d) item ist eine lokale Variable, wird also nicht automatisch mit NULL initialisiert. Deshalb wird hier ein Garbage-Wert ausgegeben.