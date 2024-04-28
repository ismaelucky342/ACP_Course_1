/*--1.1----"VARIABLES"----*/

#include <stdio.h>  

int main()
{
    int num = 5;     //integer
    float flt_num = 3.4;      //float number
    char ch = 'A';       //character
    char  str[] = "Hello";        //string

    /*--printing the variables using printf function--*/
    printf("The value of integer variable is %d\n", num);
    printf("The value of float variable is %.2f \n", flt_num);
    printf("The character variable contains '%c \n",  ch);
    printf("The string variable contains \"%s\"\n", str);

    return 0; 
}