// Gib an, ob die Aussagen jeweils wahr (w) oder falsch (f) sind.
//		a) f Die Funktionsdeklarationen "void func();" und "void func(void);" sind äquivalent.
//		b) w Die Funktionsdeklaration "const int * func();" ist gültig.
//		c) w Die Funktionsdeklaration "const int func();" ist gültig.
//		d) w Die Funktionsdeklaration "double (*func(int))(void);" ist gültig.
// Erklärung:
//		a) "void func()" akzeptiert eine beliebige Anzahl an Parametern, während "void func(void)" keine Parameter akzeptiert.
//		b) Der return-Wert ist ein Pointer auf einen konstanten Integer, was ein sinnvoller Typ ist (siehe dazu im Gegensatz c)).
//		c) Der return-Wert ist ein Integer, der konstant sein soll. Da der return-Wert aber sowieso entweder direkt verwendet wird (etwa "if (func() == 3)") oder in einer Variable gespeichert wird (etwa "int i = func();"), ist die Tatsache, dass der Integer konstant sein soll unsinnig. Die Deklaration ist trotz allem gültig.
//		d) "func" ist hierbei eine Funktion, die einen Integer erwartet und einen Pointer auf eine Funktion zurückgibt, die keine Parameter erwartet und einen Double zurückgibt. Wie man sieht, ist der Typ sehr verschleiert, man sollte in solchen Fällen deshalb von typedefs Gebrauch machen.