#include<stdio.h>
#include<conio.h>
int sum(int, int);
void main()
{
    int x, y, z;
    printf("Enter First Value: ");
    scanf("%d", &x);
    printf("Enter Second Value: ");
    scanf("%d", &y);

    z = sum(x,y);
    printf("%d", z);
    getch();
}

int sum(int a, int b)
{
    int c;
    c = a+b;
    return c;
}
