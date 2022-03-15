char * ptrString = "Hello";
char arrString[] = "World";

// Beantworte die folgenden Fragen:
//		a) Welchen Wert hat ptrString[0]?
//				Antwort: H
//				Erklärung: ptrString kann wie ein Array verwendet werden und 0 greift auf das erste Element zu (zero-indexing!).
//		b) Welchen Wert hat ptrString[5]?
//				Antwort: \0
//				Erklärung: ptrString kann wie ein Array verwendet werden und 5 greift auf das sechste Element zu (zero-indexing!). String-Literale werden immer automatisch mit dem Null-Terminator abgeschlossen.
//		c) Ist die Zuweisung ptrString[4] = 'p' erlaubt? (ja / nein)
//				Antwort: nein
//				Erklärung: String-Literale werden zum Start des Programmes einmalig im Read-Only Speicher abgelegt und sind deshalb nicht modifizierbar. ptrString zeigt auf das String-Literal, es wurden nicht die einzelnen Zeichen kopiert.
//		d) Ist die Zuweisung arrString[4] = 'p' erlaubt? (ja / nein)
//				Antwort: ja
//				Erklärung: Obwohl "World" wie in c) im Read-Only Speicher abgelegt ist, ist arrString ein Array. Deshalb werden die einzelnen Zeichen von "World" in arrString hineinkopiert und sie können verändert werden.
//		e) Was ergibt der Ausdruck ptrString == (char *)"Hello"? (true / false)
//				Antwort: true
//				Erklärung: ptrString zeigt auf das String-Literal "Hello", welches einmalig im Speicher abgelegt ist (siehe c)).
//		f) Was ergibt der Ausdruck arrString == "World"? (true / false)
//				Antwort: false
//				Erklärung: arrString ist dasselbe wie &arrString[0], zeigt also auf das erste Element. Dieses ist zwar inhaltlich dasselbe wie im Literal "World", die Adresse ist jedoch verschieden, da arrString ein Array ist und dadurch eigenen Speicher hat - im Gegensatz zu ptrString.
//		g) Was ergibt der Ausdruck sizeof(arrString) == sizeof(ptrString)? (true / false)
//				Antwort: false
//				Erklärung: arrString ist ein Array, für Arrays gilt sizeof(array) = sizeof(type_of_array) * number_of_elements. Angenommen ein char ist 1 Byte groß. Dann gilt sizeof(arrString) = 1 * 6. Pointer sind abhängig vom System entweder 4 oder 8 Bytes groß. Demnach gilt sizeof(ptrString) = 4 (oder 8).