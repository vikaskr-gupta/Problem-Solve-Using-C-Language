#include <stdio.h>
#include <conio.h>

// Automatic Storage Class
// Life = Till the Execution of the BLOCK in which it is declared
void main()
{
    auto int x = 5;
    // int x = 5; Default keyword is auto
    // int x; Default value is Garbage
    auto int y;
    // int y; Default keyword is auto & Default Vlaue is Garbage
    printf("%d\t", x); // 5
    {
        x = 2;
        y = 7;
        printf("%d\t", x); // 2
        printf("%d\t", y); // 7
    }
    printf("%d", x); // 2
    getch();
}
