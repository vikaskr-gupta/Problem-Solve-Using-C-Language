// Program to implement recursive functions in C language.
// Write a program which includes the following functions in recursive manner
// Factorial(n)    // to caclulate  factorial of a give number
// Fib(n)            // to calculate  nth Fibonacci term
// Ackermann(0,n)  // to compute ackermann function 

#include <stdio.h>
#include <conio.h>

void main()
{
    int choice, num, fact, k, i, m, n, ack;

    int factorial(int);
    int fabonacii(int);
    int ackermann(int, int);

    printf("MENU:\n1: Find Factorial.\n2: Print Fibonacci series of nth term.\n3: To Compute Ackermann Function.\nEnter Your Choice: \n");
    scanf("%d", &choice);

   switch (choice)
    {
    case 1:
        printf("Enter a number: ");
        scanf("%d", &num);
        fact = factorial(num);
        printf("The factorial of given number is %d", fact);
        break;
    case 2:
        printf("Enter the number of elements to be in the series : ");
        scanf("%d", &num);
        for (i = 0; i < num; i++)
        {
            k = fabonacii(i);
            printf("%d, ", k);
        }
        break;
    case 3:
        printf("Enter the value of m and n: ");
        scanf("%d %d", &m, &n);
        ack = ackermann(m, n);
        printf("The Ackermann value are... %d", ack);
        break;
    default:
        printf("Invalid Option.");
    }
    getch();
}

int factorial(int num)
{
    if (num <= 1)
        return num;
    else
        return num * factorial(num - 1);
}

int fabonacii(int num)
{
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return fabonacii(num - 1) + fabonacii(num - 2);
}

int ackermann(int m, int n)
{
    if (m == 0)
        return (n + 1);
    else if (m > 0 && n == 0)
        return ackermann((m - 1), 1);
    else if (m > 0 && n > 0)
        return ackermann((n - 1), ackermann(m, (n - 1)));
}
