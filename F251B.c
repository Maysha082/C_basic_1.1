#include<stdio.h>
int main()
{
    int a[7], sum=0, i;
    float ave;

    for(i=0; i<7; i++)
    {
        printf("Enter temperature for Day %d: ", i+1);
        scanf("%d", &a[i]);
    }
    for(i=0; i<7; i++)
    {
        sum = sum +a[i];
    }
    ave= (float)sum/7;

    printf("Average Temperature= %.2f\n", ave);
    return 0;

}
