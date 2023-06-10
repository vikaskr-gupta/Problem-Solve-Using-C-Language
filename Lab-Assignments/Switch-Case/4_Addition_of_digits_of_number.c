// Write a program to get addition of digits of a number

#include<stdio.h>
#include<conio.h>
void main()
{
    int num, rem = 0, store, orl_num;
    printf("Enter a Number : \n");
    scanf("%d", &num);
    orl_num = num;
    while(num!=0)
    {
        store = num % 10;
        rem = rem + store;
        num = num/10;
    }
    printf("The addition of digit of %d is %d", orl_num, rem);
    getch();
}
