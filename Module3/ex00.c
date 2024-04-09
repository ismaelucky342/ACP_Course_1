#include<stdio.h>
#include<windows.h>
#include<string.h>

/*PROTOTYPES*/
void    start();
int     validate(int index);
/*Global Var*/
int     i; 
int     numberQuestions; 
int     Time; 

/*STRUCTURES*/
struct  general{
    char org_question[100];
    char org_answer[100];

    char UserAnswer[100]; 
} general[10];

void main()
{
    printf("How many questions you need?: \n");
    scanf("%d", &numberQuestions); 

    for(i = 0; i < numberQuestions; i++){
        fflush(stdin);

        printf("Enter the question[%d]: \n", i+1);
        fgets(general[i].org_question, 100, stdin);

        printf("\nEnter Answer [%i] : for question: %s" , i+1 , general[i].org_question);
		fgets(general[i].org_answer, 100, stdin);
        system("cls");
    }
    printf("Enter time to answer the question: \n");
    scanf("%d", &Time);

    for(Time = Time;  Time >= 0; Time--) {
	
	Sleep(1000);
    printf("\r TIME LEFT : %i ", Time);

    if(Time == 0){ break; }
	
    }
    start();
}
int     validate(int index)
{
    if(strcmp(general[index].org_answer, general[index].UserAnswer) == 0) 
    {
        return 1;
    }else{
        return 0;
    }
   
}
void    start()
{
    for(i = 0; i < numberQuestions; i++)
    {
        fflush(stdin);
        printf("\n\n Answer the Question [%d]: %s\n ", i+1,  general[i].org_question);
        fgets(general[i].UserAnswer, 100, stdin);

        /*Validate*/
        if (validate(i) == 1)
        {
            printf("\n\nCorrect!\n");
        
        }
        else
        {
            printf("\n\nWrong! The correct answer is:  %s\n", general[i].org_answer);
        }
    }
}
