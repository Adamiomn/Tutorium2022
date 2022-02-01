union collection {
	int integer;
	float floating_pt;
	char name[99];
};

// Gib an, ob die Aussagen jeweils wahr (w) oder falsch (f) sind.
//		a) ☐ collection myUnion; ist eine korrekte Definition einer Variable vom obigen Typ.
//		b) ☐ Gegeben sei eine union vom obigen Typ und vom Namen myUnion. Es wird die Zuweisung
//			 	myUnion.integer = 2;
//			 getätigt. myUnion.integer und myUnion.floating_pt sind nun beide 2.
//		c) ☐ Eine Variable vom obigen Typ hat mindestens die Größe des größten Mitglieds, also sizeof(char) * 99.