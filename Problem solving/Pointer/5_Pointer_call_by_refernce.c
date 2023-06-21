#include<stdio.h>
#include<conio.h>

void greater(int x, int y, int *greate);
void main()
{
    int x = 76, y = 86, greate;

    greater(x, y, &greate);
    printf("%d", greate);
    getch();
}
void greater(int x, int y, int *greate)
{
    if(x > y)
        *greate = x;
    else
        *greate = y;
}
