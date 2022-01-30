// Gegeben sei das folgende switch-Statement:

switch (number)
{
	case 1:
		printf("1");
		break;
	case 2:
		printf("2");
	case 4:
		printf("4");
		break;
	default:
		printf("default");
}

// Gib an, was ausgegeben wird, wenn die Variable number den angegebenen Wert besitzt:
//		a) 1
//			Antwort: 1
//			Erklärung: Es gibt einen expliziten case für den Fall 1 und der Fall wird mit break; beendet.
//		b) 2
//			Antwort: 24
//			Erklärung: Es gibt einen expliziten case für den Fall 2, der Fall wird aber nicht mit break; beendet und es kommt zum Fallthrough, bis ein break; getroffen wird.
//		c) 3
//			Antwort: default
//			Erklärung: Es gibt keinen expliziten case für den Fall 3, also wird der default case verwendet
//		d) 4
//			Antwort: 4
//			Erklärung: Es gibt einen expliziten case für den Fall 4 und der Fall wird mit break; beendet.
//		e) 5
//			Antwort: default
//			Erklärung: Es gibt keinen expliziten case für den Fall 5, also wird der default case verwendet