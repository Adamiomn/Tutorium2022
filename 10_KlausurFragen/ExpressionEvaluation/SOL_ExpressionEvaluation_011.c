// Was ergibt der Ausdruck in Zeile 4?
//		b) false
// Erklärung: && hat short-circuit Funktionalität. Es wird zuerst der erste Ausdruck ausgewertet und nur wenn dieser wahr ist, wird der zweite Ausdruck ausgewertet. Da ptr ein Null Pointer ist, ist bereits die erste Bedingung falsch, die zweite wird nicht ausgewertet und es kommt nicht zu einem Segmentation Fault.