#include<stdio.h>
int prime(int n)
{
    int pri=1, i;

    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            pri=0;
        }
    }
    return pri;
}
int main()
{
    int n, pri;

    printf("Enter a number: ");
    scanf("%d", &n);

    pri= prime(n);

    if(n<=1)
    {
        printf("%d is not a prime number.\n", n);
    }
    else if(pri==1)
    {
        printf("%d is prime number.\n", n);
    }
    else
    {
        printf("%d id not a prime number.\n", n);

    }
    return 0;
}
