#include<stdio.h>
#include<conio.h>

void value_change(int *product);
void main()
{
    int product = 76;

    printf("%d\n", product);

    value_change(&product);

    printf("%d", product);

    getch();
}

void value_change(int *product)
{
    *product = 70;
}
