float * numbers = malloc(sizeof(float) * 3);
numbers[0] = 3.1415f;
numbers[1] = 2.718f;
numbers[2] = 9.81f;
numbers = realloc(numbers, 10);
free(numbers);

// Gib an, ob die Aussagen jeweils wahr (w) oder falsch (f) sind.
//		a) ☐ Es ist garantiert, dass numbers[0] nach dem realloc-Befehl den Wert 3.1415f enthält.
//		b) ☐ Nach dem realloc-Befehl ist zeigt numbers auf einen Speicherblock der Größe 10 Bytes.
//		c) ☐ Der Pointer von numbers vor und nach dem realloc-Befehl ist immer derselbe.
//		d) ☐ Nach dem free-Befehl hat numbers den Wert NULL.