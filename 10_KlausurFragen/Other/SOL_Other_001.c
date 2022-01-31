int const * (*x[5])(int)

// Welche der folgenden Aussagen ist korrekt?
//		d) x ist ein Array aus 5 Pointern auf Funktionen, welche einen int Parameter erwarten und einen Pointer auf konstante int zurückgeben.
// Erklärung: Um Typ-Deklarationen zu dekodieren müssen wir einige Regeln beachten.
//		1. Beginne beim Namen der Variable.
//		2. Lies rechts weiter, wenn möglich, lies link weiter, wenn nötig.
//			  Die folgenden Regeln gelten für das tatsächliche Lesen.
//		3. Wenn du eine geschlossene Klammer triffst, musst du nach links weitergehen.
//		4. Wenn links und rechts von dir geschlossene Klammern sind, löse sie auf.
//		5. Wenn du eine eckige Klammer triffst, steht das für ein Array.
//		6. Wenn du nach rechts eine öffnende runde Klammer triffst, steht das für eine Funktion.