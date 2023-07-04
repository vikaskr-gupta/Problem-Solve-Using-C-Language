#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    double base, exp, result;
    printf("Enter Base: ");
    scanf("%lf", &base);
    printf("Enter Exponent: ");
    scanf("%lf", &exp);

    result = pow(base, exp);
    printf("The %lf to the power of %lf = %lf", base, exp, result);
    getch();
}
