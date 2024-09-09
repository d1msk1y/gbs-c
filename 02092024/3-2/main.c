#include <stdio.h>
#include <limits.h>

int printMaxValues(){
    // Define variables for different digit types
    char character = 100;
    int integer = INT_MAX;
    short shortInteger = SHRT_MAX;
    long longInteger = LONG_MAX;
    long long longLongInteger = LLONG_MAX;

    printf("---------------------------------\n");
    printf("Max value different data types:\n");
    // Print the variables along with their values
    printf("character is %c\n", character);
    printf("integer is %d\n", integer);
    printf("shortInteger is %hd\n", shortInteger);
    printf("longInteger is %ld\n", longInteger);
    printf("longLongInteger is %lld\n", longLongInteger);

    return 0;
}

void printFloat(){
    float floatNumber = 4.98;
    double doubleNumber = 4.5;
    long double longDoubleNumber = 1.34235325;

    printf("floatNumber is %f\n", floatNumber);
    printf("doubleNumber is %f\n", doubleNumber);
    printf("longDoubleNumber is %Lf\n", longDoubleNumber);
}

void printSizeOf(){
    printf("---------------------------------\n");
    printf("Size of different data types:\n");

    printf("Size of char is %lu\n", sizeof(char));
    printf("Size of int is %lu\n", sizeof(int));
    printf("Size of short is %lu\n", sizeof(short));
    printf("Size of long is %lu\n", sizeof(long));
    printf("Size of long long is %lu\n", sizeof(long long));
    printf("Size of float is %lu\n", sizeof(float));
    printf("Size of double is %lu\n", sizeof(double));
    printf("Size of long double is %lu\n", sizeof(long double));
}

void printOutOfRange(){
    printf("---------------------------------\n");
    printf("different datatypes with value out of range:\n");
    char character = 1000;
    int integer = INT_MAX + 1;
    short shortInteger = SHRT_MAX + 1;
    long longInteger = LONG_MAX + 1;
    long long longLongInteger = LLONG_MAX + 1;

    printf("character is %c\n", character);
    printf("integer is %d\n", integer);
    printf("shortInteger is %hd\n", shortInteger);
    printf("longInteger is %ld\n", longInteger);
    printf("longLongInteger is %lld\n", longLongInteger);
}

void printPiNumber(){
    printf("---------------------------------\n");
    printf("Pi number:\n");
    double pi = 3.14159265359;
    printf("pi is %.11f\n", pi);
}

int main() {
    printMaxValues();
    printFloat();
    printSizeOf();
    printOutOfRange();
    printPiNumber();
    return 0;
}