#include<stdio.h>
#include<conio.h>
void main()
{
    int x;
    printf("Enter a Number: ");
    scanf("%d", &x);

    if(x%2==0)
    {
        printf("The Number %d is Even.", x);
    }
    else
    {
        printf("The Number %d is Odd.", x);
    }
    getch();
}
