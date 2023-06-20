#include <stdio.h>
#include <conio.h>
void main()
{
    int x, y;
    int *p, *q;

    p = &x;
    q = &y;

    // Pointers can't be ADDIBLE
    // &x + &y; // OR
    // p + q;

    // Pointers can't be MULTIPLICABLE
    // &x *&y; // OR
    // p * q;

    // Pointers can't be DIVISIBLE
    // &x / &y; // OR
    // p / q;

    // We can ADD someting in Pointer but in LIMITED RANGE
    // printf("%d\n", q);  // 6422288
    // printf("%d\n", p);   // 6422292  , int data_type contain 4 byte int 32-bit
    // printf("%d\n", p + 1); // 6422296 = p+4
    // printf("%d\n", p + 4); // 6422308 = p+16

    // We can Subtract someting in Pointer but in LIMITED RANGE
    // printf("%d\n", p - 1); // 6422288 = p-4
    // printf("%d\n", p - 4); // 6422308 = p-16

    // We can Subtract two pointers but it have to be in same data_type
    printf("%d\n", &x - &y);  // pointer_1 - pointer_2 = Literal Subtraction - size_of(type_of_pointer)
    printf("%d\n", p - q);
    printf("%d\n", q - p);
}
