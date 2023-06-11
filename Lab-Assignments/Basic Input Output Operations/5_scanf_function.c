// Write program using scanf function to insert space into the string

#include <stdio.h>
#include <conio.h>
void main()
{
    char name_1[20], name_2[20];

    printf("Enter first string :\n");
    scanf("%[^\n]", name_1);
    printf("%s\n", name_1);

    printf("Enter second string :\n");
    scanf("%s", &name_2);
    printf("%s", name_2);
    getch();
}
