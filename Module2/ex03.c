/*
Exercise #8: Create a list of items for a store, give the user the option to choose which items to buy, display the total price of their purchase, and
apply a 10% discount with a valid coupon.

\n
*/

// LIBRARIES
#include <stdio.h>
#include <string.h> // COMPARE WITH strcmp strcpy


// GLOBAL VARIABLES
int opc; // user option of the item they want to buy
float total_sum;
float price_list[] = { 50 , 10 , 80 , 0 };
char coupon[15] = "summer"; // COUPON CODE
char userCoupon[15]; // WHAT THE USER ENTERS



// PROTOTYPES
void menu();
void purchase_details();


// MAIN FUNCTION
void main()
{
    menu();
}

void menu()
{
    // MENU OF ITEM OPTIONS
    printf("0. Monitor \t\t$50 USD");
    printf("\n1. Keyboard \t\t$10 USD");
    printf("\n2. Printer \t\t$80 USD");
    printf("\n3. Finish purchase");

    do
    {
        printf("\nEnter the item number: ");
        scanf("%i", &opc);

        // ITERATIVE SUM
        total_sum += price_list[opc];

    }
    while (opc != 3 );
    if (opc == 3) { purchase_details(); } // IF OPTION IS 3, FINISH THE PURCHASE AND GO TO PURCHASE DETAILS
}

void purchase_details()
{
    int hasCoupon;

    // ASK IF THEY HAVE A COUPON
    printf("\nDo you have a discount coupon? YES=1 | NO=0");
    scanf("%i", &hasCoupon);

    // IF THEY DON'T HAVE A COUPON
    if (hasCoupon == 0) // THEY DON'T HAVE
    {
        printf("\nYou don't have a coupon, you must pay the total of %f " , total_sum); // TOTAL TO PAY WITHOUT COUPON
    }

    // IF THEY HAVE A COUPON
    if (hasCoupon == 1) // THEY HAVE
    {
        printf("\nEnter the discount coupon: ");
        scanf("%s" , &userCoupon); // STORE THE COUPON ENTERED BY THE USER

        // NESTED CONDITIONAL TO COMPARE BOTH COUPONS
        if ( strcmp(coupon, userCoupon) == 0 ) // THEY MATCH AND APPLY THE DISCOUNT
        {
            float discounted_total_sum = total_sum * 0.90; // apply 10%
            printf("\nYour discount has been applied, instead of paying %f , you will pay %f ", total_sum , discounted_total_sum);
        }

        else // IF THE ENTERED COUPON IS NOT VALID
        {
            printf("\nThe entered coupon is invalid, you will pay the original total of %f " , total_sum);
        }

    }


}
