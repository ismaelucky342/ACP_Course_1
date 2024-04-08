/*
Exercise 3: Create a stopwatch or alarm giving the user the option to stop it.
*/

#include <stdio.h>
#include <windows.h> // SLEEP()

int main()
{
    // The user will input which unit to stop the stopwatch: hours, minutes, or seconds
    int unit;
    printf("1. Hours");
    printf("\n2. Minutes");
    printf("\n3. Seconds");
    printf("\nEnter your option when you want to stop your stopwatch: ");
    scanf("%i", &unit);

    // The user will input the amount of hours, minutes, or seconds
    int amount;
    printf("\nEnter the amount: ");
    scanf("%i" , &amount);

    // Variables for hours, minutes, and seconds
    int hour, minute, second;

    // Three nested loops for hours, minutes, and seconds
    for (hour = 0; hour <= 24; hour++)
    {
        for (minute = 0; minute < 60; minute++)
        {
            for (second = 0; second < 60; second++)
            {
                // Add a 1000 ms interval = 1 second
                Sleep(1000);

                // Print our stopwatch
                printf("\r %.2i : %.2i : %i " , hour , minute , second );

                // Conditional for hours
                if (unit == 1 && amount <= hour)
                {
                    printf("\nStopwatch finished");
                    return 0;
                }

                // Conditional for minutes
                else if (unit == 2 && amount <= minute)
                {
                    printf("\nStopwatch finished");
                    return 0;
                }

                // Conditional for seconds
                else if (unit == 3 && amount <= second)
                {
                    printf("\nStopwatch finished");
                    return 0;
                }
            }
        }
    }
    return 0;
}
