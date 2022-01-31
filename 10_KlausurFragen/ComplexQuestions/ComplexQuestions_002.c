// Was wird vom folgenden Programm ausgegeben?

#include <stdio.h>
#define VALUE 10

int main()
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

// Antwort: 