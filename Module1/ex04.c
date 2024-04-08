/*
Exercise #4: Create a program that generates a random number from 1 to 50. 
The user has to guess the random number. In case the guess is incorrect, hints will be provided, and the user must keep trying.

*/

#include <stdio.h>
#include <time.h> // Contains a function that allows us to generate the random number

int main()
{

    srand(time(NULL));
    // Generate the random number and store it in the 'random' variable
    int random = 1 + rand() % ((50 + 1) - 1);

    // Create a variable to store the user's guess
    int guess;

    // Display the random number
    printf("\nRandom number is: %i ", random);

    do {
        printf("\nEnter your guess: ");
        scanf("%i", &guess);

        // Provide hints
        if (random < guess) // If the guess is greater
        {
            printf("\nThe random number is less than your guess");
        }
        else if (random > guess) // If the guess is smaller
        {
            printf("\nThe random number is GREATER than your guess");
        }
        else
        {
            printf("\nCongratulations! Your guess is correct. Program terminated.");
        }

    } while (random != guess);

    return 0;
}
