#include<stdio.h>
int farea(int n)
{
    int area;

    area= n*n;

    return area;
}
int fperimeter(int n)
{
    int peri;

    peri= 4*n;

    return peri;
}
int main()
{
    int n, area, peri;

    scanf("%d", &n);

    area = farea(n);
    peri= fperimeter(n);

    printf("Area: %d\n", area);
    printf("Perimeter: %d\n", peri);

    return 0;

}
