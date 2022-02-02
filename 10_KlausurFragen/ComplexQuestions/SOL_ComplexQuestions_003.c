// Gegeben sei das folgende Programm:

#include <stdio.h>

int main()
{
	int i;
	scanf("%d", &i);
	do
	{
		printf("1");
		if (~i ^ 1)
		{
			printf("2");
			i *= (i < 0) - (i > 0);
			if (i == 0)
			{
				printf("5");
				continue;
			}
		}
		if (i == -1)
		{
			printf("3");
			return 0;
		}
	}
	while (i);

	printf("4");
	return 0;
}

// Es wird angenommen, dass das Programm ausgeführt wird und eine gültige Zahl eingegeben wird.
// Gib an, ob die Aussagen jeweils wahr (w) oder falsch (f) sind.
//		a) w	Unabhängig vom Wert von i gibt das Programm zumindest immer 1 aus.
//		b) f	Unabhängig vom Wert von i gibt das Programm zumindest immer 4 aus.
//		c) w	Ist i 1, so wird unter anderem 2 ausgegeben.
//		d) f	Ist i 1, so wird mit Sicherheit nicht 3 ausgegeben.
//		e) f	Ist i 0, so wird nur 124 ausgegeben.
//		f) t	Die Schleife kann für bestimmte Werte von i eine Endlos-Schleife sein.
// Erklärung:
//		a) Nachdem eine Zahl eingegeben wurde, wird der do-Block ausgeführt. Also wird sofort 1 ausgegeben.
//		b) Ist i 1, so wird nach kurzem 3 ausgegeben und das Programm beendet.
//		c) Ist i 1, so ist ~i ^ 1 wahr, da ~1 ^ 1 alle Bits auf 1 setzt.
//		d) Ist i 1, so ist ~i ^ 1 wahr (siehe c)). Das Vorzeichen von i wird negativ (*= (i < 0) - (i > 0)) und es ist i == -1 wahr. Daher wird 3 ausgegeben.
//		e) Ist i 0, so ist ~i ^ 1 trotzdem wahr. Das Vorzeichen von i wird negativ wie in d), was nichts am Wert ändert. Deshalb ist i == 0 wahr und es wird auch noch 5 ausgegeben.
//		f) Ist i beispielsweise 2, so ist ~i ^ 1 wahr, das Vorzeichen von i wird negativ und ist nun -2. Keine der if-Bedingungen treffen zu, die Schleifenbedingung stimmt jedoch noch. ~i ^ 1 ist beim zweiten Durchlauf erneut wahr und i bleibt -2. Der Rest ist identisch zum ersten Schleifendurchgang und wir haben eine Endlosschleife.