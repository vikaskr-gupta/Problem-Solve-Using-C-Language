#include <stdio.h>
#include <conio.h>
void main()
{
    char x;
    printf("Enter a Value: ");
    scanf("%c", &x);
    if (x >= 48 && x <= 57)
        printf("This is Digit");
    else if (x >= 56 && x <= 90)
        printf("This is Uppercase");
    else if (x >= 97 && x <= 122)
        printf("This is Lowercase");
    else if (x >= 32 && x <= 47 || x >= 58 && x <= 64 || x >= 91 && x <= 96 || x >= 123 && x <= 126)
        printf("This is a Symbol");
    getch();
}
