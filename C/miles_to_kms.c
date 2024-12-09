

// MILES TO KILOMETERS
// 1 mile = 1.609344 kms

#include <stdio.h>

void miles_to_km(float mile)
{
    if (mile < 0)
    {
        printf("\nInvalid input\n");
        return;
    }
    float km = mile * 1.609344;

    printf("\n%f mile(s) : %f km(s)\n", mile, km);
}

int main()
{
    miles_to_km(2.20);

    return 0;
}
