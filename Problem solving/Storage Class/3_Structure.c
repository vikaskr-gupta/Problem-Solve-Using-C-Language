#include<stdio.h>
#include<conio.h>

// Register Storage Class
// Life = Till the Execution of the BLOCK in which it is declared
void main()
{
    register int i; // Default Value is Garbage
    int n = 5; // Default Keyword is Auto
    for(i=1; i<=n; i++)
    {
        printf("Vikas\n");
    }
    getch();
}
