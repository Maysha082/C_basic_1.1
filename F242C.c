#include<stdio.h>
int summation(int a, int b)
{
    int sum;
    sum= a+b;
    return sum;
}

int subraction(int a, int b)
{
    int sub;
    sub= a-b;
    return sub;
}
int multiplication(int a, int b)
{
    int mul;
    mul= a*b;
    return mul;
}
float division(int a, int b)
{
    float div;
    if(b!=0)
    {
        div= (float)a/b;
        return div;
    }
    else
    {
        printf("Invalid\n");
    }

}
int main()
{
    int a, b, sum, sub, mul;
    float div;

    printf("Enter two number: \n");
    scanf("%d %d", &a, &b);

    sum= summation(a, b);
    sub= subraction(a, b);
    mul= multiplication(a, b);
    div= division(a, b);

    printf("Summation: %d\n", sum);
    printf("Subtraction: %d\n", sub);
    printf("Multiplication: %d\n", mul);
    printf("Division: %.2f\n", div);

    return 0;
}
