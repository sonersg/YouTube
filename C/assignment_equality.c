

// ASSIGNMENT OPERATOR (=):
// Purpose:
// Used to assign a value to a variable.
// Functionality:
// It takes the value on the right side and
// assigns it to the variable on the left side.
// Example:
// x = 5 assigns the value 5 to the variable x.

// EQUALITY OPERATOR (==):
// Purpose:
// Used to compare two values to see if they are equal.
// Functionality:
// It checks if the value on the left is equal to
// the value on the right and returns true (1)
// if they are equal, or false (0) if they are not.
// Example:
// x == 5 checks if x is equal to 5.

#include <stdio.h>

int main()
{
    // assignment
    int x = 5;
    printf("%d \n", x);

    // equality operator
    printf("%d \n", x == 789);
    // printf("value of x: %d \n", x);

    return 0;
}

// Key Differences:
// Assignment (=) is about storing a value in a variable.
// Equality (==) is about comparing values.
// Assignment changes the value of a variable, while equality does not.
