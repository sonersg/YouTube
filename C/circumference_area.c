

// CIRCUMFERENCE AND AREA OF A CIRCLE
// circumference: 2 * PI * r
// area: PI * r^2

#include <stdio.h>

float circumference_area(float radius)
{
    const float PI = 3.1415;

    float r = radius;

    float circumference_of_circle = 2 * PI * r;

    float area_of_circle = PI * (r * r);

    printf("\n\nArea of the circle with the radius %f : %f\n\n", r, area_of_circle);

    printf("Circumference of the circle with the radius %f : %f\n\n", r, circumference_of_circle);

    return area_of_circle;
}

int main()
{

    float area = circumference_area(3.2);

    printf("area from the main func: %f", area);

    return 0;
}
