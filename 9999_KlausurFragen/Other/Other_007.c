// Gegeben sei folgende Funktionsdeklaration (es wird angenommen, dass ihre Definition irgendwo vorhanden ist):
int Compute(const int * x, const float * const y, double * result);

// Außerdem seien folgende Variablen definiert:
int myInteger = 10;
const float myFloat = 2.718f;
double myDouble;

// Gib an, ob die Aussagen jeweils wahr (w) oder falsch (f) sind.
//		a) ☐ Der Aufruf Compute(10, 2.718f, &myDouble) ist gültig.
//		b) ☐ Der Aufruf Compute(&myInteger, &myFloat, &myDouble); ist gültig.
//		c) ☐ Der Aufruf Compute(&myInteger, &myInteger, NULL); ist gültig.