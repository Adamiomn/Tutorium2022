// Was wird vom folgenden Programm ausgegeben?

#include <stdio.h>
#define VALUE 10

int main()
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

// Antwort: 