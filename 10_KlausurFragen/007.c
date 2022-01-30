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

// Kreuze die richtigen Antworten an:
//		a) Die Variable COUNTER in Zeile 3 hat zum Beginn des Programms den Wert 0.
//		b) Die Variable ITEM in Zeile 4 hat zum Beginn des Programms einen undefinierten Wert.
//		c) Das print-Statement in Zeile 10 gibt 5 aus.
//		d) Das print-Statement in Zeile 11 gibt 0x0 (0 in Hexadezimal) aus.