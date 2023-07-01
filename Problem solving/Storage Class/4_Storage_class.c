#include <stdio.h>
#include <conio.h>

// Static Storage Class
void main()
{
    void f1();
    f1();
    f1();
    getch();
}

// The Life of Auto is End After the execution of the program & it create a new f1 function in which i is 0;
// void f1()
// {
//     // IF, int i; By default Value is Garbage & KeyWord is Auto
//     int i = 0;
//     i++;
//     printf("i=%d\n", i);
// }

// The Life Of static is not End Untill the whole program is End, here the value of i is 1 after the execution of first call then in the second call i is also 1;
void f1()
{
    // IF,  static int i; By default Value is 0
    static int i;
    i++;
    printf("i=%d\n", i);
}
