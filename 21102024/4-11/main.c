// Aufgabe: 4-1
// Datum: 21.10.2024
// Author: Dmytro Yatsenko

#include<stdio.h>
#include<math.h>

int main(){
	// Deklaration
	int zahl1;
	int zahl2;
	int result;

	// Eingabe
	printf("Bitte geben Sie die Basis ein: ");
	scanf("%d", &zahl1);

	printf("Bitte geben Sie den Exponenten ein: ");
	scanf("%d", &zahl2);

	// Verarbeiten
	result = pow(zahl1, zahl2);
	// Ausgabe
	
	printf("%d", result);
	return 0;
}
