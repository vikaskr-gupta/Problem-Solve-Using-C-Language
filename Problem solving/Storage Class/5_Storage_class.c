#include<stdio.h>
#include<conio.h>

// EXTERNAL Storage Class
int x = 10;
// void f();
// void main()
// {
//     printf("%d", x); // 10
//     f();
//     printf("%d", x); // 11
//     getch();
// }
// void f()
// {   
//     x++;
//     printf("%d", x); // 11
// }

// ************************************Error
// int x = 10;
// void main()
// {
//     printf("x=%d\n", x); // 10
//     f();
//     printf("x=%d\n", x); // 10
//     getch();
// }
// void f()
// {   
//     x = 5;
//     x++;
//     printf("x=%d\n", x); // 6
// }

// ************************************
// Undefined x because extern is used only for to known the program which is x is exixt here.
// void main()   
// {
//     extern int x;
//     x = 5;
//     printf("%d", x);
// }

// ***********************************
// int x = 10;
// void main()
// {
//     extern int x; // here, we inform the programwhich is x is exixt.
//     printf("x=%d\n", x); // 10
//     getch();
// }

// ************************************

// void main()
// {
//     extern int x;
//     // IF extern is not here then it show undefined x;
//     printf("x=%d\n", x); // 10
//     f();
//     printf("x=%d\n", x); // 10
//     getch();
// }
// int x = 10;
// void f()
// {   
//     x = 5;
//     x++;
//     printf("x=%d\n", x); // 6
// }
