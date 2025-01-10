

// Quadratic Equations

#include <stdio.h>
#include <math.h>

void quadratic(int a, int b, int c)
{

    float root1 = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
    float root2 = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);

    printf("\n%f\n", root1);
    printf("\n%f\n", root2);
}

int main()
{
    quadratic(2, -4, -6);
}
