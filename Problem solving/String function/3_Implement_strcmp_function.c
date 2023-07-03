#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char name[5];
    printf("Enter your password: ");
    scanf("%s", &name);
    if (strcmp(name, "Vikas") == 0)
        printf("Successfullu access...");
    else
        printf("Errror Password!");
    getch();
}
