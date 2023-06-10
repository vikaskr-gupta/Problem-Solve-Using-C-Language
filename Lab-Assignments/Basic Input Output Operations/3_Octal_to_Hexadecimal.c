// Write program to convert octal to hexadecimal  and vice versa

#include<stdio.h>
#include<conio.h>
void main()
{
    int oct_num, hexa_num;

    printf("Enter a number which is in Octal Form: \n");
    scanf("%o", &oct_num);
    printf("The Hexa-decimal Form of %o is %x\n", oct_num, oct_num);

    printf("Enter a number which is in Hexa-decimal Form: \n");
    scanf("%x", &hexa_num);
    printf("The Octal Form of %x is %o", hexa_num, hexa_num);
    getch();
}
