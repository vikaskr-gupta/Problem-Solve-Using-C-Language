// 1.	Implement pointer arithmetic

#include <stdio.h>
#include <conio.h>

void main()
{
    int x, y, *p, *q;
    p = &x;
    q = &y;

    printf("Enter the value of x = ");
    scanf("%d", &x);
    // Enter the value of x = 220
    printf("Address = %d", p); // Address = 6422292

    printf("\nEnter the value of y = ");
    scanf("%d", &y);
    // Enter the value of y = 110
    printf("Address = %d\n", q); // Address = 6422288

    // printf("Addition: %d\n", p+q);
    // invalid operands to binary + (have 'int *' and 'int *')
    printf("Addition: %d\n", p + 2); // 6422292 + 8
    // Addition: 6422300

    // printf("Multiplication: %d\n", p*q);
    // invalid operands to binary * (have 'int *' and 'int *')
    // printf("Subtraction: %d\n", p*2);
    // invalid operands to binary * (have 'int *' and 'int')

    // printf("Division: %d\n", p/q);
    // invalid operands to binary / (have 'int *' and 'int *')
    // printf("Multiplication: %d\n", p/2);
    // invalid operands to binary / (have 'int *' and 'int')

    printf("Subtraction: %d\n", p - q); // 6422292 - 6422288 = 4 = 1(int)
    // Subtraction: 1
    printf("Subtraction: %d\n", p - 2); // 6422288 - 8(4*2 int)
    // Subtraction: 6422284

    getch();
}
