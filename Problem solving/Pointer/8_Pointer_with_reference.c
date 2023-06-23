#include <stdio.h>
#include <conio.h>

void opr(int a , int b, int *, int *, int *);
void main()
{
    int x = 2, y = 7, sum, prod, avr;
    opr(x, y, &sum, &prod, &avr);
    printf("%d\n", sum);
    printf("%d\n", prod);
    printf("%d", avr);
}

void opr(int a, int b, int *sum, int *prod, int *avr)
{
    *sum = a+b;
    *prod = a*b;
    *avr = a+b/2;
}
