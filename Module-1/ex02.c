/*--1.2---MACROS--OPS--VAR--*/

#include <stdio.h>
#define PI 3.1416

int main()
{
    float z = PI; 
    float  x = 5.321, y = 7.64;
    x = x*PI;
    y = y*PI;

    printf("the value of PI is: %f\n", z);
    printf("the value of op1 is:  %.2f \n",x);
    printf("the value of op2 is:  %.2f \n",y);

    return 0;
}