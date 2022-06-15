struct Person
{
	char * name;
	unsigned age;
	bool likesChocolate;
};

// Gib an welche der folgenden Definitionen / Codeausschnitte korrekt (w) und welche inkorrekt (f) sind:
//		a) f	Person myPerson = {.age = 20, .name = "Peter"};
//		b) w	struct Person myPerson = {.age = 22};
//				myPerson.name = "Maia";
//				myPerson.likesChocolate = 0;
//		c) f	struct Person * myPerson;
//				myPerson->name = "Jeff";
//				myPerson->age = 21;
//				myPerson->likesChocolate = 1;
// Erklärung:
//		a) Der struct wurde nicht ge-typedef'd. Der Typ ist "struct Person", nicht nur "Person". Die Initialisierung ist jedoch gültig, man muss der Reihenfolge in der Deklaration des structs nicht folgen.
//		b) Der struct wurde zwar nicht vollständig initialisiert, aber das ist auch nicht nötig.
//		c) Es wurde nur ein Pointer auf ein struct Person erstellt, aber nie ein tatsächlicher Pointer auf ein struct Person zugewiesen. Der Pointer in myPerson ist ein Garbage-Wert. Die Zuweisungen in den darauffolgenden Zeilen wären korrekt.