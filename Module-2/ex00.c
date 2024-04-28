/*--2.1--SELECTIVE--STRUCTURES--*/

#include <stdio.h>

int main()
{   
    int y; 
    int x = 9; 

    printf("Enter number\n: ");
    scanf("%d", &y);

    if (x == y)
    {
        printf("\ncongratulations ! You guessed correctly.\n");
        }
     else
         printf("\nyou have failed to guess the correct number.\n");
         
    return 0;  
}
/*This program prompts a user to enter a number and then checks whether or not they entered the correct number by comparing it with another variable '*/