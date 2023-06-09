// Write a program to calculate factorial

#include<stdio.h>
#include<conio.h>
void main()
{
    long int i, num, fact = 1;
    printf("Enter a Number :\n");
    scanf("%ld", &num);
                                               
    for(i = 1; i<=num; i++)
    {
        fact = fact * i; 
    }
    printf("The Factorial of %ld is %ld", num, fact);
    getch();
}
