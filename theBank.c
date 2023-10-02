/*Project 3 - Bank ATM*/

# include<stdio.h>
# include<ctype.h>
# include<stdlib.h>

struct transaction
{
    float Transfer;
    float DepositMoney;
    float WithdrawMoney;
    float BalanceEnquiry;
};

struct transaction c1;

void Transfer()
{   
    printf("Enter amount to transfer: ");
    scanf("%f", &c1.Transfer);

    if (c1.BalanceEnquiry-c1.Transfer<1000)
    {
        printf("Insufficient Balance.\n");
        exit(0);
    }
    else
    {
        c1.BalanceEnquiry = c1.BalanceEnquiry - c1.Transfer;
        printf("Transaction Complete.\n");
    }
}

void Deposit()
{
    printf("Enter amount to deposit: ");
    scanf("%f", &c1.DepositMoney);
    c1.BalanceEnquiry = c1.BalanceEnquiry + c1.DepositMoney;
}

void Withdraw()
{
    printf("Enter amount to be writhdraw: ");
    scanf("%f", &c1.WithdrawMoney);

    if (c1.BalanceEnquiry-c1.WithdrawMoney<1000)
    {
        printf("Insufficient Balance.\n");
        exit(0);
    }
    else
    {
        c1.BalanceEnquiry = c1.BalanceEnquiry - c1.WithdrawMoney;
        printf("Transaction Complete.\n");
    }
}

void Balance()
{
    printf("Your Balance - %.2f\n", c1.BalanceEnquiry);
}

int main() { 

    FILE *cust;
    int options;
    char more;

    cust = fopen("DataEntry_tsrBANK.text", "a");

    do
    {
        int cid = (rand () % 900) + 100;

        printf("1:Transfer | 2:Deposit | 3:Withdraw | 4:Balance | 5:Exit\n\n"); /*Options*/
        printf("Please choose the option from above: ");
        scanf("%d", &options);

        switch (options)
        {
        case 1 : Transfer();
            break;
        case 2 : Deposit();
            break;
        case 3 : Withdraw();
            break;
        case 4 : Balance();
            break;

        default:
            printf("Something wents wrong...\n");
            break;
        }
        
        fprintf(cust, "0%d  |  %.2f |  %.2f  |  %.2f\n", cid, c1.DepositMoney, c1.WithdrawMoney, c1.BalanceEnquiry);

        printf("Any other query? (Y/N): ");
        scanf(" %c", &more);

    } while(toupper(more)=='Y');

    return 0; 

}