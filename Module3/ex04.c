/*
 
Exercise #13: Capture one or more keys at any time during the execution of our program using ASCII code.
 
ASCII = EACH OF OUR KEYS ON OUR KEYBOARD HAS A UNIQUE ASCII CODE VALUE
 
A, B / * @! = IT HAS A UNIQUE ASCII CODE
 
a = 97
A = 65
 
 
EXERCISE: PRINT HELLO WORLD BY PRESSING THE A KEY
 
 
*/
#include <stdio.h>
#include <conio.h>
#include <windows.h> 
#define letter_a 97

int main()
{
    char letter; 
    while(1)
    {
        letter = getch(); //get character input from user

        if(letter == letter_a) 
        {
            printf("\nHello World\n"); //print Hello World when 'a' is pressed
        }  
    }
    return 0; 
}