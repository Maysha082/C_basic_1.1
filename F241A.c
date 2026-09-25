#include<stdio.h>
int main()
{
    int N;

    printf("Enter size in odd number: ");
    scanf("%d", &N);

    if(N%2==0&&N<=0)
    {
        printf("Enter a valid number\n");
    }
    else
    {
        int a[N][N], i, j, row=0, col=0;

        for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
            {
                printf("Enter value at %d %d: ", i+1, j+1);
                scanf("%d", &a[i][j]);
            }
        }
        for(i=0; i<N; i++)
        {
            for(j=0; j<N; j++)
            {
                printf("%d ",a[i][j]);

            }
            printf("\n");
        }
        for(j=0; j<N; j++)
        {
            row= row+ a[N/2][j];
        }
        for(i=0; i<N; i++)
        {
            col= col+ a[i][N/2];
        }
        printf("Summation of row's elements: %d\n", row);
        printf("Summation of column's elements: %d\n", col);
    }
   return 0;
}
