// Write a program to check the given year is Leap year or not

#include<stdio.h>
#include<conio.h>
void main()
{
    int yr;
    printf("Enter a Year: ");
    scanf("%d", &yr);

    if((yr%400==0) || ((yr%4==0) && (yr%100!=0)))
    {
        printf("This is a Leap_Year!");
    }
    else{
        printf("This is not a Leap_Year!");
    }
    getch();
}
