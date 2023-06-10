// Write program to convert decimal to octal using format specifier and vice versa

#include<stdio.h>
#include<conio.h>
void main()
{
    int dec_num, oct_num;

    printf("Enter a number which is in Decimal Form : \n");
    scanf("%d", &dec_num);
    printf("The Octal form of %d is %o", dec_num, dec_num);

    printf("Enter a number which is in Octal Form : \n");
    scanf("%o", &oct_num);
    printf("The Decimal form of %o is %d", oct_num, oct_num);
    getch();
}
