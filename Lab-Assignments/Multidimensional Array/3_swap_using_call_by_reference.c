// 3.	Write a program to implement swap function using call by reference 

#include<stdio.h>
#include<conio.h>
void main()
{
    int num1, num2;
    
    void interchange(int*, int*);

    printf("Enter Two Number:\n");
    scanf("%d%d", &num1, &num2);
    printf("X=%d, Y=%d\n", num1, num2);

    interchange(&num1, &num2);

    printf("X=%d, Y=%d", num1, num2);
    getch();
}
void interchange(int *num1, int *num2)
{
    int swap;
    swap = *num1;
    *num1 = *num2;
    *num2 = swap;
}
