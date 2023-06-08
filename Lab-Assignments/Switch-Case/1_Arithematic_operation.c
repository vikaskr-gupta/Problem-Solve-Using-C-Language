//Write a menu driven program to implement basic arithmetic functions using switch and functions

#include <stdio.h>
#include <conio.h>
void main()
{
    char arth_op;
    int x, y;
    float result;

    printf("Enter Two Numbers:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    printf("Choose Any One:\n+ or - or * or /\n");
    printf("Your choice is... ");
    fflush(stdin);
    scanf("%c", &arth_op);
    

    switch (arth_op)
    {
    case '+':
        result = x + y;
        printf("The Result is %f", result);
        break;
    case '-':
        result = x - y;
        printf("The Result is %f", result);
        break;
    case '*':
        result = x * y;
        printf("The Result is %f", result);
        break;
    case '/':
        result = x / y;
        printf("The Result is %f", result);
        break;
    default:
        printf("Invalid Input");
    }
    getch();
}
