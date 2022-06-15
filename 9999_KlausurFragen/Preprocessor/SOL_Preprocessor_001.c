// Der folgende Code wurde auskommentiert, damit die Antwort nicht durch eine IDE verraten wird.
//	#define MY_MACRO
//	#ifdef MY_MACRO
//		#define ITS_TRUE 1
//	#elif
//		#define ITS_TRUE 0
//	#endif

// Gib an, ob die Aussagen jeweils wahr (w) oder falsch (f) sind.
//		a) f	MY_MACRO ist kein Makro, da es keinen Wert besitzt.
//		b) f	MY_MACRO kann nur für #ifdefs und analoge Präprozessor-Befehle verwendet werden, nicht aber für tatsächlichen Code.
//		c) w	ITS_TRUE hat den Wert 1.
// Erklärung:
//		a) MY_MACRO ist trotzdem ein Makro und kann sogar im Code verwendet werden. Weil es keinen Wert besitzt, wird es durch den Präprozessor einfach gelöscht.
//		b) siehe a)
//		c) MY_MACRO ist definiert, deshalb wird #define ITS_TRUE 1 verwendet.