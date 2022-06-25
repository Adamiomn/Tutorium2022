// Was wird vom folgenden Programm ausgegeben?

#include <stdio.h>
#define VALUE 10

int main(void)
{
	int i;
	for (i = 0; i < VALUE; i += 3)
	{
#undef VALUE
#define VALUE 1
		if (i % 2)
		{
			i -= VALUE;
		}
		else if (i % 9)
		{
#undef VALUE
#define VALUE 4
			i = 40;
			break;
		}
		printf("%d", i);
	}

	printf("%d", i);
	return 0;
}

// Antwort: 0246811
// Erklärung:
//		Wir gehen zuerst den Präprozessor durch. VALUE ist anfangs 10. Damit wird der Wert in der for-Schleife immer 10. Nach der Zeile von for(...) wird der Wert auf neudefiniert und auf 1 gesetzt. Damit wird von i immer 1 abgezogen. 		Nach der Zeile von else if (...) wird er Wert erneut neudefiniert und auf 4 gesetzt. Im restlichen Programm wird VALUE jedoch nicht mehr verwendet, deshalb ist diese Definition nutzlos. Der Code sieht nach dem Präprozessor so aus:
int main(void)
{
	int i;
	for (i = 0; i < 10; i += 3)
	{
		if (i % 2)
		{
			i -= 1;
		}
		else if (i % 9)
		{
			i = 40;
			break;
		}
		printf("%d", i);
	}

	printf("%d", i);
	return 0;
}
//		Jetzt gehen wir die Schleifen-Iterationen durch.
//			i = 0
//				i % 2 ist false, i % 9 ebenfalls.
//				Es wird i ausgegeben: 0
//				i wird vor Beginn der nächsten Iteration um 3 erhöht und ist nun 3.
//			i = 3
//				i % 2 ist true, i wird um 1 verringert und ist nun 2.
//				Es wird i ausgegeben: 2
//				i wird vor Beginn der nächsten Iteration um 3 erhöht und ist nun 5.
//			i = 5
//				i % 2 ist true, i wird um 1 verringer und ist nun 4.
//				Es wird i ausgegeben: 4
//				i wird vor Beginn der nächsten Iteration um 3 erhöht und ist nun 7.
//			i = 7
//				i % 2 ist true, i wird um 1 verringer und ist nun 6.
//				Es wird i ausgegeben: 6
//				i wird vor Beginn der nächsten Iteration um 3 erhöht und ist nun 9.
//			i = 9
//				i % 2 ist true, i wird um 1 verringer und ist nun 8.
//				Es wird i ausgegeben: 8
//				i wird vor Beginn der nächsten Iteration um 3 erhöht und ist nun 11.
//			i = 11
//				Die Schleifen-Bedingung schlägt fehl und die Schleife wird beendet.
//		i ist am Ende 11 und es wird 11 ausgegeben.