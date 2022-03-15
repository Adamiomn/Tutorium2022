// In math.h sind die Funktionen double log(double) und double log10(double) deklariert.

#include <math.h>
#define LOG_WITH_BASE(value, base) log##base(value)

// Beantworte die folgenden Fragen:
//		a) Zu was wird LOG_WITH_BASE(48, 10)?
//			i) log48(10)
//			ii) log10(48)
//			iii) Kompilierfehler
// 		b) Zu was wird LOG_WITH_BASE(48, 2)?
//			i) log48(2)
//			ii) log2(48)
//			iii) Kompilierfehler
// 		c) Zu was wird LOG_WITH_BASE(48, _e)?
//			i) log48(_e)
//			ii) log_e(48)
//			iii) Kompilierfehler
//		d) Zu was wird LOG_WITH_BASE(48, )?
//			i) log48()
//			ii) log(48)
//			iii) Kompilierfehler