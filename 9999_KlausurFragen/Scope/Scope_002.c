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
//		a) Das Programm kompiliert nicht, da #include keine .c Dateien unterstützt.
//		b) Das Programm kompiliert nicht, weil die Funktion "mult" nicht in main.c deklariert ist.
//		c) Das Programm kompiliert nicht, weil die Funktion "mult" mehrmals definiert ist.
//		d) Das Programm kompiliert und gibt 6 aus.