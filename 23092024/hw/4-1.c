Aufgabe:Zylinder Berechnen
Datum: 23092024
Autor: Dmytro Yatsenko

#include <stdio.h>

int main() {
    // D: Deklarationen
    const float pi = 3.14159; // Konstante für Pi
    float radius, hoehe, oberflaeche, volumen;

    // E: Eingabe
    printf("Bitte geben Sie den Radius des Zylinders ein [cm]: ");
    scanf("%f", &radius);
    printf("Bitte geben Sie die Hoehe des Zylinders ein [cm]: ");
    scanf("%f", &hoehe);

    // V: Verarbeitung
    oberflaeche = 2 * pi * radius * (radius + hoehe);
    volumen = pi * radius * radius * hoehe;

    // A: Ausgabe
    printf("Die Oberflaeche des Zylinders betraegt: %.2f cm^2\n", oberflaeche);
    printf("Das Volumen des Zylinders betraegt: %.2f cm^3\n", volumen);

    return 0;
}
