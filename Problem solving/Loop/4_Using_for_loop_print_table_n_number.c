#include<stdio.h>
#include<conio.h>
void main()
{
    int i, num;
    printf("Enter a Number : ");
    scanf("%d", &num);
    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num*i);
    }
    getch();
}
