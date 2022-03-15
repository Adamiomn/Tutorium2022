union collection {
	int integer;
	float floating_pt;
	char name[99];
};

// Gib an, ob die Aussagen jeweils wahr (w) oder falsch (f) sind.
//		a) f	collection myUnion; ist eine korrekte Definition einer Variable vom obigen Typ.
//		b) f	Gegeben sei eine union vom obigen Typ und vom Namen myUnion. Es wird die Zuweisung
//					myUnion.integer = 2;
//				getätigt. myUnion.integer und myUnion.floating_pt sind nun beide 2.
//		c) w	Eine Variable vom obigen Typ hat mindestens die Größe des größten Mitglieds, also sizeof(char) * 99.
// Erklärung:
//		a) Bei der Definition von Variablen müssen wir auch noch "union" an den Anfang schreiben, also union collection myUnion.
//		b) Die Union reserviert Speicher, der von allen Mitgliedern geteilt wird. myUnion.integer ist zwar 2, aber derselbe Speicher aus Sicht von myUnion.floating_pt muss nicht 2 sein, da Gleitkommazahlen eine völlig andere Bitstruktur besitzen.
//		c) Wichtig ist, dass die Union MINDESTENS so groß ist. Es ist dem Compiler erlaubt, die Union zu vergrößern, damit das Alignment stimmt. Normalerweise sind Daten auf 4 Bytes oder 8 Bytes aligned. Das bedeutet salopp, dass Daten nur bei Speicheradressen beginnen können, die durch 4 bzw. 8 teilbar sind. Das hat zur Folge, dass auch die Größen von Daten durch 4 bzw. 8 teilbar sein müssen.