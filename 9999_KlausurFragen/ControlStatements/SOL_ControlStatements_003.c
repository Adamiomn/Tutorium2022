for (;;)
{
	for (int i = 0; i < 10; i++)
	{
		break;
	}
}

// Gib an, ob die Aussagen jeweils wahr (w) oder falsch (f) sind.
//		a) w	Die äußere Schleife ist gültig.
// Die folgenden Aussagen nehmen an, a) sei wahr.
//		b) w	Die äußere Schleife ist äquivalent zu while(1).
//		c) f	Die break-Anweisung beendet beide Schleifen.
// Erklärung:
//		a) Nicht-existierende Ausdrücke gelten als true, deshalb ist die Schleife gültig und eine Endlosschleife.
//		b) Da (siehe a)) die Schleife eine Endlosschleife ist, ist sie äquivalent zu while(1).
//		c) Die break-Anweisung beendet immer nur die innerste Schleife. Wenn du beide Schleifen effizient auf einmal beenden möchtest, verwende goto.