/*Exercice #11: BUBBLE METHOD*/
#include<stdio.h>

int main()
{
    int i, j, objs, aux; 

    printf("How many elements  do you want to create in the matrix?: \n");
    scanf("%d", &objs);

    int matrix_num[objs]; 

    for(j = 0; j <  objs; j++) 
    {
        fflush(stdin);
        printf("\nEnter value for matrix[%i]: ", j+1);
        scanf("%i",&matrix_num[j]);
    }

    for(i=0; i<objs-1; i++)
    {
        for(j=0; j<objs-i-1; j++)
        {
            if (matrix_num[j] > matrix_num[j+1])
            {
                /* Swapping */
                aux = matrix_num[j];
                matrix_num[j]= matrix_num[j+1];
                matrix_num[j + 1] = aux;
            }
        }
    }

    for(i = 0; i < objs; i++)
    {   
        fflush(stdin);
        printf("Ordered %d = ", matrix_num[i]);
    }
    return 0;
}
