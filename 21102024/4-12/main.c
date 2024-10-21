/* Aufgabe: 4-12
 * Datum: 21 10 2024
 * Author: Dmytro Yatsenko
*/

#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    double v0, alpha, g, pi, distance;
    
    // Initialize constants
    g = 9.81;         // Gravitational acceleration in m/s^2
    pi = 3.141593;    // Pi constant

    // Input the initial velocity and launch angle
    printf("Bitte geben Sie die Anfangsgeschwindigkeit ein (in m/s): ");
    scanf("%lf", &v0);
    printf("Bitte geben Sie den Abwurfwinkel ein (in Grad): ");
    scanf("%lf", &alpha);

    // Convert angle to radians
    double alpha_radians = alpha * (pi / 180.0);
    
    // Calculate the flight distance
    distance = (pow(v0, 2) * sin(2 * alpha_radians)) / g;
    
    // Output the result
    printf("Die Flugweite beträgt: %.2f Meter\n", distance);

    return 0;
}

