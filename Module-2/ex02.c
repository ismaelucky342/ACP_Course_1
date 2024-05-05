/*--2.2--if--else--switch--*/

#include<stdio.h>

int main()
{
    int x; 

    printf("insert option");
    scanf("%d",&x);
    //Deprecated
    /* if (x==1) {
        printf("Monday \n");
    }else if (x==2){
        printf("Tuesday \n");
    } else if(x==3) {
        printf("Wednesday \n");
    } else {
        printf("incorrect \n");
    }
    */
    switch(x)
    {
        case 1:
            printf("Monday \n");
            break;
        case 2:
            printf("Tuesday \n");
            break;
        case 3:
            printf("Wednesday \n");
            break;
        default :
            printf("Incorrect \n");
    }
        return 0; 
}