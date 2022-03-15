printf("" "" "Hello" "" "" "World!");

// Was wird ausgegeben? Die Anführungszeichen sind nur zur Markierung des Strings da, damit klar ist, welche Leerzeichen inkludiert sind.
//		a) "HelloWorld!"
// Erklärung: Strings werden vom Präprozessor konkateniert, wenn sie nebeneinander stehen. Da alle Strings außer "Hello" und "World!" leer sind, wird "HelloWorld!" ausgeben.