#include<stdio.h>
int main()
{
    int start, end , i, evensum=0, oddsum=0;

    printf("Enter a starting number: \n");
    scanf("%d", &start);

    printf("Enter a ending number: \n");
    scanf("%d", &end);

    for(i=start; i<=end; i++)
    {
        if(i%2==0)
        {
            evensum= i+evensum;
        }
        else
        {
            oddsum= i+ oddsum;
        }

    }
    printf("The sum of Even Numbers: %d \n",evensum);
    printf("The sum of Odd Numbers: %d \n",oddsum);

    return 0;

}
