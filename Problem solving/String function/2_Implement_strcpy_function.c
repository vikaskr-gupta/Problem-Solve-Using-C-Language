#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char name1[10], name2[10];

    printf("Enter a string: ");
    gets(name1);
    
    // Copying data
    strcpy(name2, name1);
    puts(name2);
    getch();
}
