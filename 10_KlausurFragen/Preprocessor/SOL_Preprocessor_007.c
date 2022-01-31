// In math.h sind die Funktionen double log(double) und double log10(double) deklariert.

#define LOG_WITH_BASE(value, base) log##base(value)

// Beantworte die folgenden Fragen:
//		a) Zu was wird LOG_WITH_BASE(48, 10)?
//			ii) log10(48)
//			Erklärung: ## konkateniert log mit was auch immer in base übergeben wurde.
// 		b) Zu was wird LOG_WITH_BASE(48, 2)?
//			ii) log2(48)
//			Erklärung: ## konkateniert log mit was auch immer in base übergeben wurde.
// 		c) Zu was wird LOG_WITH_BASE(48, _e)?
//			ii) log_e(48)
//			Erklärung: ## konkateniert log mit was auch immer in base übergeben wurde.
//		d) Zu was wird LOG_WITH_BASE(48, )?
//			iii) Kompilierfehler
//			Erklärung: Ähnlich tatsächlichen Funktionen können wir nicht einfach "nichts" an ein Makro übergeben. Der Präprozessor bricht ab.