/*
 
Pointers and addresses in memory.
 
Exercise #12: Ask the user to type a value for a character string, for an integer and float type variable.
Then print the values using pointers and also print the memory addresses of each value.
 
*/

#include <stdio.h>

int main()
{
    char string[100];
    int  num;
    float flt_num;

    printf("VALUE  FOR A CHARACTER STRING: \n");
    fgets(string, sizeof(string), stdin); 

    printf("VALUE FOR NUM: \n");
    scanf("%d", &num);

    printf("VALUE FOR FLT_NUM: \n");
    scanf("%f", &flt_num);

    char *string_ptr = string; 
    int *num_ptr = &num; 
    float *flt_num_ptr =  &flt_num; 

    printf("string: %s \n", string_ptr);
    printf("int: %d \n", *num_ptr);
    printf("float: %f \n", *flt_num_ptr);

    printf("\nMEMORY ADDRESS STRING: %p\n", &string);
    printf("MEMORY ADDRESS INT: %p\n", &num_ptr);
    printf("MEMORY ADDRESS FLOAT: %p\n", &flt_num_ptr);

    return 0; 
}