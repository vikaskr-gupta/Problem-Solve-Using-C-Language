#include<stdio.h>
#include<conio.h>

struct address {
    char city[20];
    char pin[10];
    char phone[14];
};

struct employee{
    char name[20];
    struct address add;
};

void main()
{
    struct employee emp;
    printf("Enter the Employee Detail:\n");
    scanf("%s%s%s%s", &emp.name, &emp.add.city, &emp.add.pin, &emp.add.phone);
    printf("Name: %s\nCity: %s\nPin: %s\nPhone no.: %s");
    getch();
}
