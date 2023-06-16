#include<stdio.h>
#include<conio.h>
void main()
{
    int sum, n;
    int natural(int);
    printf("How many natural number you want to add just Enter : ");
    scanf("%d",&n);
    sum = natural(n);
    printf("The sum of %d natural numbers is %d", n, sum);
    getch();
}

int natural(int n)
{
    int sum;
    if(n == 1)
    {
        return n;
    }
    else{
        sum = n + natural(n-1);
        return sum;
    }
}
