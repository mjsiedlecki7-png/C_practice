#include <stdio.h>
// Excercise 2.1
int main(void)
    {

    float Money = 10.5658;

        printf("C no Harm to this Man for %.2f Shillings\n",Money);

       

// Excercise 2.4
    int x;
    float y;

        printf("x = %d\n",x);
        printf("y = %f\n",y);

    

// Programming Projects
//Problem 1
        printf("       *\n");
        printf("      *\n");
        printf("     *\n");
        printf("*   *\n");
        printf(" * *\n");
        printf("  *\n");


//Problem 4
        float cash, tax_percent, tip_percent;
        tax_percent = 0.05;
        tip_percent = 0.2;

        printf("Enter the Cash Total:");
        scanf("%f",&cash);
        float total_price = cash + cash*tax_percent + cash*tip_percent;
        printf("The Total Price is: $%0.2f\n",total_price);

//Problem 8
    float total_loan, interest_rate, monthly_pay,New_total;

    printf("Enter the Total Loan Amount:");
    scanf("%f",&total_loan);

    printf("Enter the Interest Rate:");
    scanf("%f",&interest_rate);

    printf("Enter the Monthly Payment:");
    scanf("%f",&monthly_pay);

    interest_rate = (interest_rate*.01)/12;
    int i = 0;
    while (total_loan > 0 || i > 300)
    {
    printf("Balance Remaining After %d Payments: %.2f\n",i,total_loan);

    total_loan = (total_loan-monthly_pay)*(1+interest_rate);
    

    i = i+1;
    }
    return 0;

    }