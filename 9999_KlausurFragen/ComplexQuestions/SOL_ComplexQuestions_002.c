// Was wird vom folgenden Programm ausgegeben?

#include <stdio.h>
#define VALUE 10

int main(void)
{
	int i = 6;
	if (i & 2)
	{
		printf("%d", i);
		int i = 3;
		i /= 2;
		i--;
		printf("%d", i);
		switch (i << 3)
		{
			case 0:
				printf("!0!");
				break;
			case 1:
				printf("!1!");
				break;
			case 2:
				printf("!1!");
				break;
			default:
				printf("!default!");
				break;
		}
	}
	if (i = 2)
	{
		printf("=2");
	}

	printf("%d", i);
	return 0;
}

// Antwort: 60!0!=22
// Erklärung:
//		6 ist binär 110
//		4 ist binär 010
//		6 & 4 ist damit 010 und die if-Bedingung wahr.
//		Es wird i ausgegeben: 6
//		int i = 3 shadowed die äußere Variable. Wenn wir im Code-Block der if-Anweisung auf i zugreifen, wird immer nur das "neue" i verwendet.
//		i /= 2 lässt i 1 werden.
//		i-- lässt i 0 werden.
//		Es wird i ausgegeben: 0
//		i << 3 ergibt 0 << 3 = 0
//		Damit ist case 0 der switch-Anweisung wahr und es wird !0! ausgegeben.
//		i = 2 ist eine Zuweisung. Der Rückgabewert einer Zuweisung ist der zugewiesene Wert selbst, also 2. Damit ist die if-Bedingung wahr.
//		Es wird =2 ausgegebn.
//		Durch die Zuweisung in der if-Bedingung ist i nun 2. Es wird i ausgegeben: 2
//		Alles zusammen ergibt: 60!0!=22