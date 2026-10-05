#include<stdio.h>
int main()
{
    int a=15, b=7, c;

    c=(a-b)/2+b;
    printf("The value of c: %d\n", c);

    a*=3;
    printf("The value of a: %d\n", a);

    a++;
    c= a % (b+5)/b + b;
    printf("The value of c: %d\n", c);

    return 0;
}
