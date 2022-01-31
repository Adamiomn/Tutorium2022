// In der Datei main.c stehen von Zeile 10 bis Zeile 12 diese drei Zeilen.

#define PTR_MSG(ptr) printf("Error at in file " __FILE__ " at line " __LINE__ ", pointer " #ptr " is NULL"); // Zeile 10
int * ptr = NULL;	// Zeile 11
PTR_MSG(ptr);	// Zeile 12

// Was wird ausgegeben?
//		a) Error at in file main.c at line 12, pointer ptr is NULL
// Erklärung: __FILE__ wird durch die Datei ersetzt, in welcher sich der Code befindet, diese ist "main.c"
//			  __LINE__ wird durch die Zeile ersetzt in welcher das Makro eingesetzt wurde. Diese ist Zeile 12.
//			  #ptr wird durch den Namen der Variable ersetzt, die übergeben wurde. Dieser ist "ptr".