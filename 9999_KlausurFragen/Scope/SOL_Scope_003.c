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
//		a) (falsch)		Das Programm kompiliert nicht, da mult.h mehrmals #include'd wurde.
//		b) (falsch)		Das Programm kompiliert nicht, weil main.c nach dem Präprozessor mehrere
//Funktionsdeklarationen enthält. 		c) (falsch)		Das Programm kompiliert nicht, weil keine
//Headerguards verwendet wurden. 		d) (RICHTIG)	Das Programm kompiliert nicht, weil der Linker keine
//Funktion für mult.c findet. 		e) (falsch)		Das Programm kompiliert nicht, weil in mult.h nicht
//alle Parameter einen Namen haben. 		f) (falsch)		Das Programm kompiliert nicht, weil in mult.h
//der zweite Parameter verschieden vom Parameter in mult.c ist. 		g) (falsch)		Das Programm
//kompiliert und gibt 6 aus.
// Erklärung:
//		a) Man kann eine Datei mehrmals mit #include einfügen.
//		b) Mehrere Funktionsdeklarationen sind kein Problem, mehrere Funktionsdeklarationen sind es.
//		c) Headerguards sein kein Muss, sondern schützen nur vor mehrfach definierten
//Funktionen/Variablen. 		d) mult.c wird nicht mit-kompiliert, deshalb gibt es im Programm keine
//Definition für mult. 		e) Funktionsdeklarationen dürfen Parameternamen aussparen.
//Funktionsdefinitionen theoretisch auch, falls der Parameter nicht verwendet wird. 		f)
//Funktionsdeklarationen und -definitionen müssen nicht in Parameternamen übereinstimmen. 		g) Wegen
//d) kompiliert das Programm nicht, gäbe aber 6 aus, wenn mit gcc main.c mult.c kompiliert würde.