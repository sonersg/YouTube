
// VARIABLES:
// Allocate space in memory to store a value.
// decleration and initialization
// const

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
    // int age; // decleration

    // age = 22; // initialization

    int age = 22;
    float decimal = 2.2;
    char charactr = 'b';
    char name[] = "soner";
    bool isStudent = false;

    const float PI = 3.14;

    printf("%d\n", age);
    printf("%.2f\n", decimal);
    printf("%c\n", charactr);
    printf("Your name is not %s\n", name);
    printf("%d\n", isStudent);
    printf("PI: %.2f\n", PI);

    return 0;
}
