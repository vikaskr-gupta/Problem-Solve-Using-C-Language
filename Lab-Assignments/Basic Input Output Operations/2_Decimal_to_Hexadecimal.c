// Write program to convert decimal to hexadecimal using format specifier and vice versa

#include<stdio.h>
#include<conio.h>
int main()
{
    int dec_num, hexa_num;

    printf("Enter a number in Decimal Form :\n");
    scanf("%d", &dec_num);
    printf("The Hexa-ecimal Form of %d is %x", dec_num, dec_num);

    printf("Enter a number in Hexa-ecimal Form :\n");
    scanf("%x", &hexa_num);
    printf("The Decimal Form of %x is %d", hexa_num, hexa_num);
    getch();
}
