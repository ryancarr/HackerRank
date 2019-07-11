#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int number;
    long bigNumber;
    char character;
    float floatNumber;
    double doubleNumber;

    scanf("%d %ld %c %f %lf", &number, &bigNumber, &character, &floatNumber, &doubleNumber);

    printf("%d\n", number);
    printf("%ld\n", bigNumber);
    printf("%c\n", character);
    printf("%.3f\n", floatNumber);
    printf("%.9g", doubleNumber);
    
    return 0;
}