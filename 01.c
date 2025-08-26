#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // Seed the random number generator with current time
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;
    // printf("Random Number between 1 and 100: %d\n", randomNumber);
    do
    {
        printf("Guess the number:\n");
        scanf("%d", &guessed);
        if (no_of_guesses >= 10 && guessed > randomNumber)
        {
            printf("Hint: The number is between %d to %d\n", randomNumber - 5, randomNumber + 5);
            printf("Lower Number Please!\n");
        }
        else if (no_of_guesses >= 10 && guessed < randomNumber)

        {
            printf("Hint: The number is between %d to %d\n", randomNumber - 5, randomNumber + 5);
            printf("Higher Number Please!\n");
        }
        else if (guessed > randomNumber)
        {
            printf("Lower Number Please!\n");
        }
        else if (guessed < randomNumber)
        {
            printf("Higher Number Please!\n");
        }
        else
        {
            printf("Congratulations!!\n");
        }

        no_of_guesses++;
    } while (guessed != randomNumber);
    printf("You Guessed the number in %d chances.\n", no_of_guesses);
    return 0;
}