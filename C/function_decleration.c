

// FUNCTION DECLERATION:

// f(x) = 2x - 3

#include <stdio.h>

// return_type function_name(parameter_list) {
//     // Function body
//     return value;  // Optional, depends on return_type
// }

// function decleration, prototype
void multiply_subtract(int number);

int main()
{
    multiply_subtract(3);

    return 0;
}

// function definition
void multiply_subtract(int number)
{
    int x = number;

    x = x * 2;

    x = x - 3;

    printf("%d\n", x);
}
