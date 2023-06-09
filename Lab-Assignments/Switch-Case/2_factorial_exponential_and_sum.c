//Write a menu driven program to implement factorial, X to the power y, additions of digits of a number using switch and functions

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int choice, num, fact, base, exe, power, num1, num2, sum;

    int factorial(int);
    double exponent(int, int);
    int addition(int, int);

    printf("MENU :\nPress 1 for Factorial of given number\nPress 2 for Exeponential solution of given Base and Power\nPress 3 for SUM of given Two digits.\nEnter your choice : ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter a Number : \n");
            scanf("%d", &num);
            fact = factorial(num);
            printf("Factoraial of %d is %d ", num, fact);
            break;
        case 2:
            printf("Enter base and power : \n");
            scanf("%d", &base);
            scanf("%d", &exe);
            power = exponent(base, exe);
            printf("The soltion is %d", power);
            break;
        case 3:
            printf("Enter Two Values : ");
            scanf("%d", &num1);
            scanf("%d", &num2);
            sum = addition(num1, num2);
            printf("The sum of %d and %d is %d", num1, num2, sum);
            break;
        default:
            printf("Invalid Option!");
            break;
    }
    getch();
}

int factorial(int num)
{
    int i, fact;
    fact = 1;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;
}

double exponent(int base, int exe)
{
    double power;
    power = pow(base, exe);
    return power;
}

int addition(int num1, int num2)
{
    int sum;
    sum = num1 + num2;
    return sum;
}
