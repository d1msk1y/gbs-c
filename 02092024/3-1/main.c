#include <stdio.h>
#include <limits.h>

int main() {
    // Define variables for different digit types
    int integer = INT_MAX;
    unsigned int unsignedInteger = UINT_MAX;
    short shortInteger = SHRT_MAX;
    unsigned short unsignedShortInteger = USHRT_MAX;
    long longInteger = LONG_MAX;
    unsigned long unsignedLongInteger = ULONG_MAX;
    long long longLongInteger = LLONG_MAX;
    unsigned long long unsignedLongLongInteger = ULLONG_MAX;

    // Print the variables along with their values
    printf("integer is %d\n", integer);
    printf("unsignedInteger is %u\n", unsignedInteger);
    printf("shortInteger is %hd\n", shortInteger);
    printf("unsignedShortInteger is %hu\n", unsignedShortInteger);
    printf("longInteger is %ld\n", longInteger);
    printf("unsignedLongInteger is %lu\n", unsignedLongInteger);
    printf("longLongInteger is %lld\n", longLongInteger);
    printf("unsignedLongLongInteger is %llu\n", unsignedLongLongInteger);

    return 0;
}