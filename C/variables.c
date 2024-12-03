
// VARIABLES:
// Used to save some values in the memory
// so we can access them later easily.

// data types   values
// int        : 2
// float      : 2.2
// double      : 2.2
// char       : 'A'
// string     : "soner"

#include <stdio.h>

int main()
{
    // decleration
    int age;

    // initialization
    age = 66;

    float gpa = 3.3;
    double priceForATea = 2.5;
    char letter = 'a';
    char letters[] = "smsksajl";

    printf("%i\n", age);
    printf("%f\n", gpa);
    printf("%lf\n", priceForATea);
    printf("%c\n", letter);
    printf("%s\n", letters);

    printf("\n\n%i", sizeof(float));
    printf("\n%i", sizeof(double));
}

// decleration and initialization
