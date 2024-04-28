/*--1.3---Ops2--Asign--*/

#include <stdio.h>


int main()
{
    int x, y;  

    x = 10; 
    y = 2; 

    //basic ops 
    printf("x + y = %d\n", x+y);     //suma
    printf("x - y = %d\n", x-y);     //resta
    printf("x * y = %d\n", x*y);     //product
    printf("x / y = %.2f\n", (float)x/y);      //div 
    printf("x %% y = %d\n", x%y);       //module
    //pre & post increment & decrement
    printf("\nx++ = %d \t x = %d\n", x++, x);
    printf("y-- = %d \t y = %d\n", y--, y);

    //assignment operators
    x += 5;        //x = x + 5
    y -= 4;        //y = y - 4
    printf("x += 5 = %d\n", x);
    printf("y -= 4 = %d\n", y);

    //comparison operators
    if(x < y) {printf("x is less than y\n");}
    else {printf("x is not less than y\n");}

    if(x == y) {printf("x is equal to y\n");}
    else {printf("x is not equal to y\n");}

    if(x > y) {printf("x is greater than y\n");}
    else {printf("x is not greater than y\n");}

    return 0;
}