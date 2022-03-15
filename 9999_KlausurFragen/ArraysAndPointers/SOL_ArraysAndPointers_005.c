int numbers[] = {1, 4, 10, -3, 0, 2};

// Gib an, ob die Ausdrücke jeweils true (t) oder false (f) zurückgeben.
//		a) f	numbers[1] == 1
//		b) t	*numbers == 1
//		c) f	numbers == &numbers[1]
//		d) t	*(numbers + 2) == numbers[2]
//		e) t	(numbers + 20) == &numbers[20]
//		f) f	(&numbers[4] - numbers) == 3
// Erklärung:
//		a) numbers[1] greift auf das zweite Element des Arrays zu (zero-indexing!), welches 4 ist.
//		b) Wird ein Array wie ein Pointer verwendet, so ist numbers dasselbe wie &numbers[0]. Damit stimmt der Ausdruck, da auf das erste Element des Arrays zugegriffen wird, welches 1 ist.
//		c) siehe b), numbers ist &numbers[0], nicht &numbers[1].
//		d) numbers + 2 ist dasselbe wie &numbers[2]. Dereferenziert man numbers + 2, so erhält man also numbers[2].
//		e) siehe d); die Speicheradresse numbers[20] ist zwar außerhalb des Arrays, aber sie ist trotzdem noch gültig.
//		f) numbers entspricht dem Element 0. Die Subtraktion der Pointer ergibt also 4 - 0 = 4.