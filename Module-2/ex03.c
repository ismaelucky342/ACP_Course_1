/*--2.3--MULTIPLE--CONDITIONS--*/

#include<stdio.h>

int main()
{
    int h,min,seg; 

    printf("enter hours: \n");
    scanf("%d",&h);
    printf ("\n enter minutes: \n");
    scanf("%d", &min);
    printf("%d", &seg);

    if(h < 23 && min <= 59 && seg <=59){
        seg += 1; 
        if (seg == 60) {min++; seg = 0;}
        if (min == 60) {h++; min = 0;}
        printf("\nthe time is %dh%dm%ds", h, min, seg);
    }else{
        printf("\nerror! invalid time format.\n");
    }

}