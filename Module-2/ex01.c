/*--2.1--EVEN/ODD NUMBERS--*/

#include <stdio.h>

int  main() 
{
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    num2 = num1 % 2; 

    if (num2 == 0)   // If the remainder is zero then it's an even number
        printf("\n%d is an EVEN number.", num1);
    else             // Otherwise, it's  an odd number
        printf("\n%d is an ODD number.", num1);
    
    return 0;
}