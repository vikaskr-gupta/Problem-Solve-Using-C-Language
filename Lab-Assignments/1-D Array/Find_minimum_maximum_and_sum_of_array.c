/*
Write a program to read a single dimension array and print using functions. Also, add the following functions to your program.
findminimum()
findmaximum()
findsumofarray()
*/

#include <stdio.h>
#include <conio.h>
int arr[5], i;
void main()
{
    int choice;

    void print_data();
    void find_minimum();
    void find_maximum();
    void sum_of_array();

    printf("Enter 5 numbers...\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    print_data();

    printf("\nEnter your choice: \n1: Find minimum.\n2: Find maximum.\n3: Find Sum of Array.\nYour Choice is...");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        find_minimum();
        break;

    case 2:
        find_maximum();
        break;

    case 3:
        sum_of_array();
        break;

    default:
        printf("Invalid option!!!");
        break;
    }
    getch();
}

void print_data()
{
    printf("Entered array is: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
}

void find_minimum()
{
    int mini;
    mini = arr[0];
    for (i = 0; i < 5; i++)
    {
        if (mini > arr[i])
            mini = arr[i];
    }
    printf("The minimum number is %d", mini);
}

void find_maximum()
{
    int max;
    max = 0;
    for (i = 0; i < 5; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("The maximum number is %d", max);
}

void sum_of_array()
{
    int sum;
    sum = 0;
    for(i=0; i<5; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum of given array is %d", sum);
}
