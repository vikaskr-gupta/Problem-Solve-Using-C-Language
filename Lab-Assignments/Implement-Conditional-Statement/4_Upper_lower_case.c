// Write a program to check given character is a vowel or not

#include<stdio.h>
#include<conio.h>
void main()
{
    char x;
    printf("Enter a Character: ");
    scanf("%c", &x);
    if(x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='o'||x=='O'||x=='u'||x=='U')
    {
        printf("This character is Vowel");
    }
    else
    {
        printf("This character is Consunent.");
    }
    getch();
}
