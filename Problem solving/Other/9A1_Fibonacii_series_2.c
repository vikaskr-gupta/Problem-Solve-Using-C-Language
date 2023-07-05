#include<stdio.h>
#include<conio.h>
void main()
{
    int x, y, z, num, i;
    printf("Enter your first Number: ");
    scanf("%d", &x);
    printf("Eneter your Second Number: ");
    scanf("%d", &y);
    printf("Enter the number of Elements you want to print: ");
    scanf("%d", &num);

    for(i=2; i<num; i++)
    {
        z=x+y;
        printf("%d\t",z);
        x = y;
        y = z;
    }
    getch();
}
