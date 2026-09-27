#include<stdio.h>
int modify(int a)
{
    if(a%3==0)
        return a+5;
    else
        return a-2;
}
int main()
{
    int i, result=0;
    for(i=1; i<=5; i++)
    {
        result+=modify(i);
    }
    printf("%d\n", result);

    return 0;
}
