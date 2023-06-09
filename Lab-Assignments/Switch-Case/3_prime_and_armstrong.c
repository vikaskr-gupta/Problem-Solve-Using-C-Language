//Write a menu driven program to check given number is prime and Armstrong using switch and functions

#include <stdio.h>
#include <conio.h>
void main()
{
    int choice, p_num, p, a_num, a;

    int is_prime(int);
    int is_armstrong(int);
    printf("Enter Your Choice :\n1 for Given Nuber is Prime or Not\n2 for Given number is Armstrong or Not!");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter a Number :\n");
        scanf("%d", &p_num);
        if (is_prime(p_num))
        {
            printf("Given number is a Prime Number");
        }
        else
        {
            printf("Given number is Not a Prime Number");
        }
        break;
    case 2:
        printf("Enter a Three digit Number :\n");
        scanf("%d", &a_num);
        if (is_armstrong(a_num))
        {
            printf("Given number is an Armstrong");
        }
        else
        {
            printf("Given number is Not an Armstrong");
        }
        break;
    default:
        printf("Invalid Option!");
        break;
        getch();
    }
}
int is_prime(int p_num)
{
    int num, i;

    if (p_num <= 1)
        return 0;
    else if (p_num == 2)
    {
        return 1;
    }

    num = p_num / 2;
    for (i = 2; i <= num; i++)
    {
        if (p_num % i == 0)
            return 0;
        return 1;
    }
}

int is_armstrong(int a_num)
{
    int pre_arm, store, rem = 0;
    pre_arm = a_num;
    while (a_num > 0)
    {
        store = a_num % 10; // 1 % 10 = 1
        rem = rem + (store * store * store);
        a_num = a_num / 10; // 15 / 10 = 1
    }
    if (pre_arm == rem)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}
