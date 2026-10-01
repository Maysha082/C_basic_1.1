#include<stdio.h>
int withdraw(int balance, int amount)
{
    int remaining;
    if(amount<=balance&&amount%500==0||amount%1000==0)
    {
        printf("Transaction Approved.\n");
        remaining= balance-amount;
        return remaining;
    }
    else
    {
        printf("Invalid\n");
        return balance;
    }

}
int main()
{
    int balance, amount, remaining;

    printf("Enter account balance: ");
    scanf("%d", &balance);
    printf("Enter withdrawal amount: ");
    scanf("%d", &amount);

    remaining= withdraw(balance, amount);

    printf("Remaining balance: %d\n", remaining);
    return 0;
}
