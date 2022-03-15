float f = 0.3f;
double d1 = 0.3;
double d2 = 0.2 + 0.1;
int i = 1;

// Gib an, ob die Ausdrücke jeweils true (t) oder false (f) zurückgeben.
//		a) f	f == d1
//		b) t	f == (float)d1
//		c) f	d1 == d2
//		d) t	i == (int)(d2 + 0.75)
// Erklärung:
//		a) 0.3 ist in Binärdarstellung eine periodische Kommazahl. Damit hat 0.3 mehr Präzision als 0.3f. Beim Vergleich wird 0.3f zum double gecasted und die zusätzlichen Kommastellen mit Nullen augefüllt. Damit fehlt beim float, der zum double promoted wurde, ein Stück der Kommazahlen und der Vergleich ergibt false.
//		b) Durch den expliziten cast von d1 auf float verliert d1 die zusätzlichen Kommastellen und ist nun exakt wie f.
//		c) Ähnliches Problem wie a) und bekanntes Beispiel davon (siehe https://0.30000000000000004.com/)
//		d) d2 + 0.75 ergibt etwas mehr als 1. Durch den Cast auf int werden die Kommastellen abgeschnitten und es bleibt 1 übrig. Damit ergibt der Vergleich true.