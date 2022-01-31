float * numbers = malloc(sizeof(float) * 3);
numbers[0] = 3.1415f;
numbers[1] = 2.718f;
numbers[2] = 9.81f;
numbers = realloc(numbers, 10);
free(numbers);

// Gib an, ob die Aussagen jeweils wahr (w) oder falsch (f) sind.
//		a) w	Es ist garantiert, dass numbers[0] nach dem realloc-Befehl den Wert 3.1415f enthält.
//		b) w	Nach dem realloc-Befehl ist zeigt numbers auf einen Speicherblock der Größe 10 Bytes.
//		c) f	Der Pointer von numbers vor und nach dem realloc-Befehl ist immer derselbe.
//		d) f	Nach dem free-Befehl hat numbers den Wert NULL.
// Erklärung:
//		a) realloc kopiert die Werte des alten Speichers automatisch in den neuen Speicher.
//		b) reallocs zweiter Parameter gibt die Größe in Bytes und nicht die Anzahl der Elemente an.
//		c) Je nachdem wie die Speicherreservierung ausfällt kann sich der Pointer ändern oder auch nicht.
//		d) free setzt nicht automatisch alle Variablen, welche auf den Speicherblock (oder in den Speicherblock hinein) gezeigt haben, auf NULL. Das wäre technisch zu umständlich.