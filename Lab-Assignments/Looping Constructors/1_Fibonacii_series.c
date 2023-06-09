// Write a program to print the Fibonacci series

#include<stdio.h>
#include<conio.h>
void main()
{
    int num1, num2, num3, num, i;
    printf("Enter Two numbers : \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("Enter the number of element, you wanted to print :\n");
    scanf("%d", &num);

    for(i=2; i<=num; i++)
    {
        num3 = num1 + num2;
        printf("%d\t", num3);    
        num1 = num2;
        num2 = num3;
    }
    getch();
}
