#include <stdio.h>
#include <conio.h>
void main()
{
    int x, y, s;
    printf("Enter two numbers:\n");
    scanf("%d%d", &x, &y);
    printf("x = %d, y = %d\n", x, y);
    s = x;
    x = y;
    y = s;
    printf("x = %d, y = %d", x, y);
    getch();
}
