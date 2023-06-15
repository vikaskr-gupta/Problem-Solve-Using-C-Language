#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    printf("Printing the Tables of 5\n");
    for(i = 1; i <= 10; i++)
    {
        printf("5 x %d = %d\n", i, 5*i);
    }
    getch();
}
