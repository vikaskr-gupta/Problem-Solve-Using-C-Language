#include <stdio.h>
#include <conio.h>

struct student
{
    char name[20];
    int class;
    char section;
}s;

void main()
{
    printf("Enter your name: \n");
    scanf("%s", s.name);
    printf("Enter your class: \n");
    scanf("%d", &s.class);
    printf("Enter your section: \n");
    scanf("%s", &s.section);
    getch();
}
