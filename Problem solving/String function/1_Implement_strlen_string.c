#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char name[10];
    printf("Enter your name:\n");
    scanf("%s", name);
    printf("The length of entered string is %d", strlen(name));
    getch();
}
