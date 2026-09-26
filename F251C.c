#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100], s2[100];

    printf("Enter first name: ");
    gets(s1);
    printf("Enter second name: ");
    gets(s2);

    strcat(s1, " ");
    strcat(s1, s2);

    printf("Full Name: %s\n",s1);

    return 0;

}
