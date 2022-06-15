// Gegeben seien zwei Dateien main.c und mult.c. Der Inhalt von mult.c ist

int mult(int a, int b)
{
	return a * b;
}

// Der Inhalt von main.c ist

#include "mult.c"
#include <stdio.h>

int main(void)
{
	printf("%d", mult(2, 3));
	return 0;
}

// Das Programm wird mit dem folgenden Befehl kompiliert:
//			gcc main.c mult.c

// Wähle die richtige Antwort aus.
//		a) [falsch] Das Programm kompiliert nicht, da #include keine .c Dateien unterstützt.
//		b) [falsch] Das Programm kompiliert nicht, weil die Funktion "mult" nicht in main.c deklariert ist.
//		c) [RICHTIG] Das Programm kompiliert nicht, weil die Funktion "mult" mehrmals definiert ist.
// 		d) [falsch] Das Programm kompiliert und gibt 6 aus.
// Erklärung:
//		a) Man kann sowohl .c, als auch .h Dateien mit #include einfügen.
//		b) Da mult.c textuell eingefügt wird, gibt es sowohl Deklaration, als auch Definition in main.c
// 		c) Da die Kompilierung main.c und mult.c gemeinsam kompiliert (und damit linked), gibt es zwei Definitionen: Eine in main.c (welche durch #include hineinkopiert wurde) und eine in mult.c. Der Linker ist verwirrt und bricht ab.
//		d) Wegen c) kompiliert das Programm nicht, gäbe aber 6 aus, wenn die Funktion "mult" nur einmal definiert wäre.