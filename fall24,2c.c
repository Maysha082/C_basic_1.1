#include<stdio.h>
int main()
{
    int cow, chicken, total, cowsave, chicsave;

    printf("Enter number of cow: ");
    scanf("%d", &cow);

    printf("Enter number of chicken: ");
    scanf("%d", &chicken);

    if(cow>=0 && chicken>=0)
    {
        if(cow==0)
        {
            cowsave=0;

        }
        else if(cow==1)
        {
            cowsave=5000;
        }
        else if(cow==2)
        {
            cowsave=10000;
        }
        else
        {
            cowsave=15000;
        }


        if(chicken==0)
        {
            chicsave=0;
        }
        else if(chicken==1)
        {
            chicsave=100;
        }
        else if(chicken==2)
        {
            chicsave=200;
        }
        else
        {
            chicsave=500;
        }

        total = cowsave + chicsave;
        printf("Total savings: %d\n", total);

    }
    else
    {
        printf("Negative\n");
    }

    return 0;
}
