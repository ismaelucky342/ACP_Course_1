#include<stdio.h>

void menu(); 
int deposit_money();
int withdrawal_m(); 

int a_balance = 100; 

void main()
{
    menu();
}

void menu()
{
    int opc; 

    printf("-----ATM------\n");
    printf("1. check balance\n");
    printf("2. deposit money\n");
    printf("3. withdrawals\n");
    printf("4. exit\n");
    printf("\nEnter the option: ");
    scanf("%d", &opc);

    switch(opc)
    {
        case 1: printf("Balance: %d $   \n", a_balance); 
                menu(); 
        break;
        case 2: deposit_money(); 
        break; 
        case 3: withdrawal_m(); 
        break; 
        case 4:  printf("Exiting... \n");  
        fflush(stdin);
        break; 
        default : printf("Invalid Option! Try Again.\n"); 
    }

}

int deposit_money()
{
    int amount = 0; 

    printf("---Deposit Money---\n");
    printf("How much do you want to deposit? : "); 
    scanf("%i", &amount);
    if (amount < 0 )
    {
        printf("Sorry, negative values are not allowed!\n"); 
        
    } else {

        a_balance += amount;
        printf("Your new balance is %d $\n", a_balance);
        menu();

    }
}
int withdrawal_m()
{
    int amount = 0; 

        printf("---withdrawal Money---\n");
        printf("How much do you want to withdrawal? : "); 
        scanf("%i", &amount);
        if (amount < 0 )
        {
            printf("Sorry, negative values are not allowed!\n"); 
          
        } else {

            a_balance -= amount;
            printf("Your new balance is %d $\n",a_balance);
            menu();
        }
}