#include <stdio.h>

int main()
{
    int table; 
    int i; 
    int resultado; 
    int table2; 

    printf("Insert number  of the table: ");
    scanf("%i", &table);
    printf("insert how many tables  you want to multiply:\n");
    scanf("%i",&table2);

    for(i = 0; i <= table2; i++){
        resultado = i * table; 
        printf("%i * %i = %i\n", i, table, resultado);
    }
    
    return 0; 
}