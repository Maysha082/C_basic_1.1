#include<stdio.h>

int summation(int n)
{
    int sum=0, digit;

    while(n!=0)
    {
        digit= n%10;
        sum=sum+digit;
        n=n/10;
    }
    return sum;
}
int main()
{
    int n, sum;

    scanf("%d", &n);

    sum=summation(n);
    printf("Summation of Digits:%d\n", sum);

    return 0;

}
