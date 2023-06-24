#include <stdio.h>
#include <conio.h>
// struct date
// {
//     int d, m, y;
// };

//***********************************
struct date
{
    int d, m, y;
}d1;

// *********************************** we can define more data type variable like d1
// struct date{
//     int d, m, y;
// }d1, d2, d3;

// ***********************************another way of defining
// struct date{
// int d, m, y;
// };
// struct date d1;
// struct date d2;

// **********************************
void main()
{
    // struct date today = {23, 01, 2023}; //initializing values

    struct date today; // another way of initializing values
    today.d = 23;
    today.m = 01;
    today.y = 2023;

    // *********************************************************************
    // How to assign same value in d1 as same as date data type

    // struct date today = {23, 01, 2023}; //initializing values
    // d1.d = today.d;
    // d1.d = today.m;
    // d1.d = today.y;

    // *********************************************************************
    // Another way of assing same value as same as date data type

    d1 = today;

    // Initializing value thorugh INPUT by the user
    printf("Enter the Today's Date:\n");
    scanf("%d/%d/%d", &d1.d, &d1.m, &d1.y);
    printf("Date: %d/%d/%d", d1.d, d1.m, d1.y);
    
    getch();
}
