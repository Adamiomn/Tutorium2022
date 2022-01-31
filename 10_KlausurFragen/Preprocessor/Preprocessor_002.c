#define BUFFER 1024
#define LOG_BUFFER log2(BUFFER)
#define LOG_BUFFER(x) log(BUFFER) / log(x)
#define OFFSET BUFFER + LOG_BUFFER

// Beantworte die folgenden Fragen:
//		a) Zu was wird LOG_BUFFER erweitert?
//				Antwort: 
//		b) Zu was wird LOG_BUFFER(4) erweitert?
//				Antwort: 
//		c) Zu was wird OFFSET erweitert?
//				Antwort: 