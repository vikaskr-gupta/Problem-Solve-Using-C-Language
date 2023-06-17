#include<stdio.h>
#include<conio.h>

void main()
{
    int num;

    int fact(int);
    printf("Enter a number:");
    scanf("%d", &num);
    printf("The factorial of given number is %d", fact(num));
    getch();
}
int fact(int num)
{
    if(num<2)
        return 1;
    else
        return num * fact(num-1);
}
