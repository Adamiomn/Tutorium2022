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
//		b) 2
//			Antwort: 24
//		c) 3
//			Antwort: default
//		d) 4
//			Antwort: 4
//		e) 5
//			Antwort: default