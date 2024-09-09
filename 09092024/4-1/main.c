#include <stdio.h>

int main() {
    // Step 1: Declare two integer variables and initialize them
    int zahl1 = 1567;
    int zahl2 = 367;
    
    // Declare variables for sum, difference, product, quotient, and remainder
    int summe, differenz, produkt, quotient, rest;
    
    // Perform calculations
    summe = zahl1 + zahl2;
    differenz = zahl1 - zahl2;
    produkt = zahl1 * zahl2;
    quotient = zahl1 / zahl2;
    rest = zahl1 % zahl2;
    
    // Step 2: Declare float variables for floating-point division
    float division_float;
    
    // Step 3: Perform floating-point division
    division_float = (float)zahl1 / (float)zahl2;
    
    // Step 4: Output the results
    printf("Die Summe der Zahlen %d und %d ist %d\n", zahl1, zahl2, summe);
    printf("Die Differenz der Zahlen %d und %d ist %d\n", zahl1, zahl2, differenz);
    printf("Das Produkt der Zahlen %d und %d ist %d\n", zahl1, zahl2, produkt);
    printf("Der Quotient der Zahlen %d und %d ist %d\n", zahl1, zahl2, quotient);
    printf("Die Division der Zahlen %d und %d ist %d Rest %d\n", zahl1, zahl2, quotient, rest);
    
    // Output the floating-point division result
    printf("Die Division der Zahlen %d und %d ist %.4f (Fliesskommadivision)\n", zahl1, zahl2, division_float);

    return 0;
}
