/*--1.4--BUBBLE--METHOD--*/

#include <stdio.h>

int main()
{
    int x,y, aux; 

    printf("the value of x is:  "); 
    scanf("%d", &x);

    printf("the value of y is:  ");
    scanf("%d",&y);

    aux = x;  //save the value of x in 'aux'
    x = y; 
    y = aux; 

    printf("The value of x is :  %d\n", x);
    printf("The value of y is :  %d\n", y);

    return 0; 
}