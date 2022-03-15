// Gegeben seien drei Dateien main.c, mult.h und mult.c. Der Inhalt von mult.h ist

int mult(int, int second);

// Der Inhalt von mult.c ist

int mult(int a, int b)
{
	return a * b;
}

// Der Inhalt von main.c ist

#include "mult.h"
#include <stdio.h>

int main(void)
{
	printf("%d", mult(2, 3));
	return 0;
}

// Das Programm wird mit dem folgenden Befehl kompiliert:
//			gcc main.c

// Wähle die richtige Antwort aus.
//		a) Das Programm kompiliert nicht, da mult.h mehrmals #include'd wurde.
//		b) Das Programm kompiliert nicht, weil main.c nach dem Präprozessor mehrere
//Funktionsdeklarationen enthält. 		c) Das Programm kompiliert nicht, weil keine Headerguards
//verwendet wurden. 		d) Das Programm kompiliert nicht, weil der Linker keine Funktion für mult.c
//findet. 		e) Das Programm kompiliert nicht, weil in mult.h nicht alle Parameter einen Namen haben.
//		f) Das Programm kompiliert nicht, weil in mult.h der zweite Parameter verschieden vom
//Parameter in mult.c ist. 		g) Das Programm kompiliert und gibt 6 aus.