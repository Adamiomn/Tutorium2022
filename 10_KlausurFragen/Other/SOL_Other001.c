// Gegeben sei der folgende Code-Ausschnitt:

enum colors {
	black = 0,
	red = 1,
	green = 2,
	blue = 3,
	white = 5
};

// Kreuze an welche der folgenden Zuweisungen korrekt (w) und welche inkorrekt (f) sind:
//		a) f	colors myColor = 0;
//		b) w	enum colors myColor = green;
//		c) w	enum colors myColor = 4;
// Erklärung:
//		a) colors ist nicht der vollständige Typ, sondern enum-colors
//		b) Wir können den Namen der enum-Werte verwenden
//		c) enums sind ints, wir können auch Werte zuweisen, die wir nicht definiert haben.