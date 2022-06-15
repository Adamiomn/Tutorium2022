// Gegeben sei folgende Funktionsdeklaration (es wird angenommen, dass ihre Definition irgendwo vorhanden ist):
int Compute(const int * x, const float * const y, double * result);

// Außerdem seien folgende Variablen definiert:
int myInteger = 10;
const float myFloat = 2.718f;
double myDouble;

// Gib an, ob die Aussagen jeweils wahr (w) oder falsch (f) sind.
//		a) f	Der Aufruf Compute(10, 2.718f, &myDouble) ist gültig.
//		b) w	Der Aufruf Compute(&myInteger, &myFloat, &myDouble); ist gültig.
//		c) w	Der Aufruf Compute(&myInteger, NULL, &myDouble); ist gültig.
// Erklärung:
//		a) Compute erwartet Pointer auf Integer bzw. Float, 10 und 2.718 zu übergeben ist daher ungültig.
//		b) myInteger, myFloat und myDouble entsprechen genau den Typen, die erwartet werden. Zwar enthalten die Parameter einige const mehr, doch das ist kein Problem, da dies striktere Einschränkungen bedeutet, was immer erlaubt ist.
//		c) Siehe b). NULL ist als Pointer immer erlaubt.