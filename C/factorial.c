
// FACTORIAL:
// In mathematics, the factorial of a
// positive integer n denoted as n!
// it is the product of all positive
// integers less than or equal to n

// Examples:
// 3! = 3×2×1 = 6
// 5! = 5×4×3×2×1 = 120

#include <stdio.h>

int main(void)
{

    int f_n = 5;
    int result = 1;

    for (int i = f_n; i > 0; i--)
    {
        result = i * result;
    }

    printf("\n\n%d\n", result);
}
