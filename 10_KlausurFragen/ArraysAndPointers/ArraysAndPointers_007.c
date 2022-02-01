// Die Funktion qsort aus stdlib.h sortiert Elemente eines Arrays und hat die folgende Signatur:
void qsort(void * array_of_elements,
		   size_t number_of_elements,
		   size_t bytesize_of_elements,
		   int (*comparison_function)(const void *, const void *));

// Gegeben sei außerdem die Variable numbers...
float numbers[] = {3.1415f, 13.337f, 9.81f, 2.71828f};

// ...sowie die folgenden Funktionen (hier nur deklariert, wir nehmen an, dass sie irgendwo korrekt definiert sind):
int GenericComparator(const void *, const void *);
int FloatComparator(const float *, const float *);

// In dieser Übung bedeutet "korrekt"
//		1. Der Aufruf erzeugt KEINEN Kompilierungsfehler.
//		2. Der Aufruf sortiert number_of_elements Elemente des Arrays.
//		3. Der Aufruf führt auf allen Betriebssystemen zum selben Ergebnis.
// Gib an, ob die Aussagen jeweils wahr (w) oder falsch (f) sind.
//		a) ☐ Der Aufruf qsort(numbers, 4, sizeof(float), &GenericComparator); ist korrekt.
//		b) ☐ Der Aufruf qsort(numbers, 4, sizeof(float *), GenericComparator); ist korrekt;
//		c) ☐ Der Aufruf qsort(numbers, 4, sizeof(void), GenericComparator); ist korrekt;
//		d) ☐ Der Aufruf qsort(numbers, 3, sizeof(float), GenericComparator); ist inkorrekt, da nicht die volle Größe des Arrays übergeben wurde.
//		e) ☐ Der Aufruf qsort(numbers, 4, sizeof(float), FloatComparator); ist korrekt, da const float * implizit zu const void * umgewandelt werden kann.
//		f) ☐ Der Aufruf qsort(numbers, 4, sizeof(float), (const void * a, const void * b) => {return a -b;}); ist korrekt.
//		g) ☐ Der Aufruf qsort("HelloWorld", 10, sizeof(char), GenericComparator); ist korrekt.