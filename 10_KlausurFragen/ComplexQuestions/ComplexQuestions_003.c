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

// Es wird angenommen, dass das Programm ausgeführt wird und eine Zahl eingegeben wird.
// Gib an, ob die Aussagen jeweils wahr (w) oder falsch (f) sind.
//		a) ☐ Unabhängig vom Wert von i gibt das Programm zumindest immer 1 aus.
//		b) ☐ Unabhängig vom Wert von i gibt das Programm zumindest immer 4 aus.
//		c) ☐ Ist i 1, so wird unter anderem 2 ausgegeben.
//		d) ☐ Ist i 1, so wird mit Sicherheit nicht 3 ausgegeben.
//		e) ☐ Ist i 0, so wird nur 4 ausgegeben.
//		f) ☐ Die Schleife kann für bestimmte Werte von i eine Endlos-Schleife sein.