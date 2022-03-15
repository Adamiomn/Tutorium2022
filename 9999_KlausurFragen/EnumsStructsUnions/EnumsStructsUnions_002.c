struct Person {
	char * name;
	unsigned age;
	bool likesChocolate;
};

// Gib an welche der folgenden Definitionen / Codeausschnitte korrekt (w) und welche inkorrekt (f) sind:
//		a) ☐ Person myPerson = {.age = 20, .name = "Peter"};
//		b) ☐ struct Person myPerson = {.age = 22};
//			 myPerson.name = "Maia";
//			 myPerson.likesChocolate = 0;
//		c) ☐ struct Person * myPerson;
//			 myPerson->name = "Jeff";
//			 myPerson->age = 21;
//			 myPerson->likesChocolate = 1;