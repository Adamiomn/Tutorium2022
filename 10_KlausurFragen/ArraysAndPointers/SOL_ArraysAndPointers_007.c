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
//		a) w	Der Aufruf qsort(numbers, 4, sizeof(float), &GenericComparator); ist korrekt.
//		b) f	Der Aufruf qsort(numbers, 4, sizeof(float *), GenericComparator); ist korrekt;
//		c) f	Der Aufruf qsort(numbers, 4, sizeof(void), GenericComparator); ist korrekt;
//		d) f	Der Aufruf qsort(numbers, 3, sizeof(float), GenericComparator); ist inkorrekt, da nicht die volle Größe des Arrays übergeben wurde.
//		e) w	Der Aufruf qsort(numbers, 4, sizeof(float), FloatComparator); ist korrekt, da const float * implizit zu const void * umgewandelt werden kann.
//		f) f	Der Aufruf qsort(numbers, 4, sizeof(float), (const void * a, const void * b) => {return a -b;}); ist korrekt.
//		g) f	Der Aufruf qsort("HelloWorld", 10, sizeof(char), GenericComparator); ist korrekt.
// Erklärung:
//		a) Die übergebenen Parameter entsprechen genau der Signatur von qsort. numbers ist zwar ein Array, wird aber implizit auf einen float-Pointer umgewandelt, welche implizit in einen void-Pointer umgewandelt werden kann.
//		b) Der dritte Parameter von qsort muss die Größe der Elemente, nicht die Größe der Pointer auf ein Element übergeben. Je nach Plattform kann es funktionieren, falls float und float * dieselbe Größe haben.
//		c) sizeof(void) ist 1, damit wird das Array nicht sortiert, sondern Teile der Floats.
//		d) Man muss nicht alle Elemente sortieren lassen. Hier werden lediglich die ersten drei Elemente sortiert.
//		e) Es wird vom Kompiler ein Warning erzeugt, aber es lässt sich kompilieren. Trotzdem ist es nicht zu empfehlen Comparator-Funktionen in dieser Art zu schreiben.
//		f) Lambdas gibt es in C nicht.
//		g) "HelloWorld" ist ein konstantes char-Array, da Array-Literale im read-only Memory liegen. Damit kann das Array gar nicht sortiert werden.