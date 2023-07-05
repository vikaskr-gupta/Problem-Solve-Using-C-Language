#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1;
    l1:
    printf("%d\n", i);
    i++;
    if(i <= 10)
    goto l1;

    getch();
}
