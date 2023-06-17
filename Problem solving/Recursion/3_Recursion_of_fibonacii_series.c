#include <stdio.h>
#include <conio.h>
void main()
{
    int num, i, x;
    int fib(int);

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The fibonacii series is:\n");
    for (i = 0; i <= num; i++)
    {
        x = fib(i);
        printf("%d\t", x);
    }
    getch();
}

int fib(int num)
{
    if (num < 2)
        return 1;
    else
        return fib(num - 1) + fib(num - 2);
}
