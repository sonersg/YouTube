

// VARIABLES:
// Used to save some values in the memory
// so we can access them later easily.

// data types   values
// int        : 2
// float      : 2.2     -> 4 bytes
// double      : 2.2    -> 8 bytes
// char       : 'A'
// string     : "soner"

#include <stdio.h>

int main()
{
    // decleration
    int age;

    // initialization
    age = 66;

    age = 77;

    float gpa = 3.3;
    double large_number = 30000000000.0;
    char letter = 'a';
    char letters[] = "soner";

    printf("you are not %i years old!", age);
    // printf("%.1f", gpa);
    // printf("%lf", large_number);
    // printf("%c", letter);
    // printf("%s", letters);

    // printf("%i", sizeof(float));
}

// decleration and initialization
