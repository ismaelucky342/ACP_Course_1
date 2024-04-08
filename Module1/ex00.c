#include <stdio.h>

int main()
{
    int table; 
    int i; 
    int resultado; 

    printf("Insert number  of the table: ");
    scanf("%i", &table);

    for(i = 0; i <= 10; i++){
        resultado = i * table; 
        printf("%i * %i = %i\n", i, table, resultado);
    }

    return 0; 
}