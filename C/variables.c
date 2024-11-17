
// VARIABLES:
// Used to save some values in the memory
// so we can access them later easily.

// data types   values
// int        : 2
// float      : 2.2
// char       : 'A'
// string     : "soner"
// boolean    : true 1, false 0

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age = 22;
    float gpa = 3.99999;
    char letter = 'a';
    char name[] = "soner";
    bool isStudent = false;

    // decleration
    int number;
    // initialization
    number = 12;

    const float PI = 3.14;

    // printf("\n\n%d\n\n", age);
    // printf("\n\n%.1f\n\n", gpa);
    // printf("\n\n%c\n\n", letter);
    // printf("\n\n%s\n\n", name);
    // printf("\n\n%d\n\n", isStudent);

    // printf("\n\n%d\n\n", number);
    printf("\n\n%.2f\n\n", PI);

    return 0;
}

// decleration and initialization
// const keyword
