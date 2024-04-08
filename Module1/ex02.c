/*CALCULATOR*/
#include <stdio.h>

int menu(); 
int sum(int n, int m);
int subtract(int n, int m);
int multiply(int n, int m);
int split(int n, int m);
int show_tables(int n, int m);



int main()
{
    menu();
    return 0;
}

int menu()
{
    int opc; 

    printf("--------BASIC CALCULATOR---------\n");
    printf("                                 \n");
    printf("Select Option\n");
    printf("1.Sume\n");
    printf("2.subtract\n");
    printf("3.multiply\n");
    printf("4.split\n");

    printf("select here: \n");
    scanf("%d", &opc);

    int num1, num2; 
    printf("insert num1: \n");
    scanf("%d",&num1);
    printf("insert num2: \n");
    scanf("%d",&num2);


    switch(opc) {
        case 1: sum(num1, num2);
        break;
        case 2: subtract(num1, num2);
        break;
        case 3: multiply(num1, num2);
        break;
        case 4: split(num1, num2);
        break;
        default: printf("Invalid option.\n");
    }
}

int sum(int n, int m){
    int s = n + m;
    printf("\nsum of %d and %d is :%d\n", n, m,s);
    return s;
}

int subtract(int n, int m){
    if (m > n ) {
        printf("\nError! Cannot Subtract a number from a bigger one.");
    } else{
        int sub = n - m;
        printf("\ndifference between %d and %d is:%d\n", n, m ,sub);
    }
}

int multiply(int n, int m){
    int mul= n * m;
    printf("\nthe product of %d and %d is:%d\n", n, m,mul);
}

int split(int n, int m){
    int split; 

    split =  n / m ;
    printf("the split of %d / %d is: %d", n, m, split);
    return  split;
}
