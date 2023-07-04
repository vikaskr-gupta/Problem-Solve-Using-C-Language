#include<stdio.h>
#include<conio.h>
void main()
{
    long int num, i, fact;
    printf("Enter a Number: ");
    scanf("%ld", &num);
    fact=1;
    for(i=1; i<=num; i++)
    {
        fact = fact*i;
    }
    printf("%ld",fact);
    getch();
}
