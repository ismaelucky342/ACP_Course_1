/*--3.1--FOR--WHILE--*/

#include <stdio.h>

int main()
{
    int x, y, i;  

    printf ("introduce number \n");
    scanf("%d", &x);  
    printf("Introduce greater number: \n");
    scanf("%d",&y); 

    for(i = x + 1; i < y; i++){
        printf("%d \n", i);
    }
    return 0; 
}