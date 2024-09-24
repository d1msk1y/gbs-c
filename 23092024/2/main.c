#include<stdio.h>

int main(){
    int circleRadius;
    const double pi = 3.1415;

    printf("Geben die Radius ein: ");
    scanf("%d", &circleRadius);

    printf("Die Fläche des Kreises ist: %f\n", pi * circleRadius * circleRadius);
    printf("Der Umfang des Kreises ist: %f\n", 2 * pi * circleRadius);

    return 0;
}