#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,num,sum;
    float ava;
    printf("Enter Ten values : \n");
    // Input
    for(i=0;i<=9;i++)
    {
        scanf("%d", &a[i]);
    }
    // Output
    for(i=0;i<=9;i++)
    {
        sum = sum + a[i];
    }
    ava = sum/10.0;
    printf("The avarage is %f", ava);
    getch();
}
