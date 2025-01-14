
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int answer = (rand() % 100) + 1;

    // printf("%d", answer);

    while (1)
    {
        int guess = 0;

        printf("Guess a number, 0 to quit: ");
        scanf("%d", &guess);

        // printf("%d", guess);

        if (guess == 0)
            break;
        else if (guess < answer)
            printf("Too low, guess again!\n");
        else if (guess > answer)
            printf("Too high, guess again!\n");
        else
        {
            printf("Correct! The answer was: %d", answer);
            break;
        }
    }
    printf("Thanks for playin you are leaving early!");
}