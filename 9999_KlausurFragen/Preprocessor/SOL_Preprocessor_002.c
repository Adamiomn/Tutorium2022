#define BUFFER 1024
#define LOG_BUFFER log2(BUFFER)
#define LOG_BUFFER(x) log(BUFFER) / log(x)
#define OFFSET BUFFER + LOG_BUFFER

// Beantworte die folgenden Fragen:
//		a) Zu was wird LOG_BUFFER erweitert?
//				Antwort: log2(1024)
//		b) Zu was wird LOG_BUFFER(4) erweitert?
//				Antwort: log(BUFFER) / log(4)
//		c) Zu was wird OFFSET erweitert?
//				Antwort: 1024 + log(1024)