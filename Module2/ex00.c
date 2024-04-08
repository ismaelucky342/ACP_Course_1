#include<stdio.h>

struct alum{
    char name[20]; 
    int age;
    float english, math, science; 
} alum[30]; 

int main() {

    int alum_C; 
    printf("insert number of alumn: \n");
    scanf("%d",  &alum_C);

    int i; 

    for(i = 1;  i < (alum_C + 1 ); i++)
    {
        //buffer
        fflush(stdin);
        printf("\n Alum[%i] - Insert name: ", i);
        gets(alum[i].name);  
        
        printf("\n Alum[%d] - Insert age: ", i);
        scanf("%d" ,&alum[i].age);
        fflush(stdin);

        printf("\n Alum[%d] - Insert english mark: ", i);
        scanf("%f" ,&alum[i].english);
        printf("\n Alum[%d] - Insert science mark: ", i);
        scanf("%f" ,&alum[i].science);
        printf("\n Alum[%d] - Insert math mark: ", i);
        scanf("%f" ,&alum[i].math);

        

    }
    for (i = 1; i < (alum_C + 1 ) ; i++)
	{   
        printf("\n Alum[%i] - Name: %s - Age: %i : \n" , i , alum[i].name , alum[i].age);
        printf("Marks English: %f \n", alum[i].english);
        printf("Marks English: %f \n", alum[i].math);
        printf("Marks English: %f \n", alum[i].science);
    }
    return 0; 
}