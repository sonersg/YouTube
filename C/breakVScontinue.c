

// BREAK VS CONTINUE: 
// We may see these keywords in loops.
// BREAK keyword gets out of the loop completely.
// CONTINUE keyword skips the current step (iteration) 

// *** mention this if(condition) break

#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 5; i++)
    {
        // if (i == 2)
        //     break;

        if (i == 3)
            continue;
        ;

        printf("Step %d\n", i);
    }
    printf("End of the loop!");
}
