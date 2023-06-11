/*
Program with the following functions
is_prime()
is_armStrong()
NCR()
NPR()
to_upper() // to convert given character into upper case
to_lower() // to convert given character into lower case
is_upper() // to check given character is in upper case or not
is_lower() // to check given character is in lower case or not
is_digit() //to check given character is digit or not
is_alphabet() //to check given character is alphabet or not
power(x,y) // x to the power y
factorial(n) // to calculate factorial of n
*/


#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
void main()
{
    int choice, p_num, a_num, n, r, base, exp, power, fact;
    char Ch, upper, lower;
    long result;

    int is_prime(int);
    int is_armstrong(int);
    long factorial(int);
    long find_nCr(int, int);
    long find_nPr(int, int);
    char to_upper(char);
    char to_lower(char);
    char is_upper(char);
    char is_lower(char);
    char is_digit(char);
    char is_alphabet(char);
    double exponents(int, int);
    long find_factorial(int);

    printf("MENU:\n1: Checking Prime Number.\n2: Checking Armstrong Number.\n3: Finding nCr.\n4: Finding nPr.\n5: Converting into Uppercase.\n6: Converting into Lowercase.\n7: Checking Upper Case.\n8: Checking Lower Case.\n9: Checking Digit.\n10: Checking Alphabet.\n11: Finding Exponents Value.\n12: Finding factorial.\nEnter Your Choice: \n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter a number: ");
        scanf("%d", &p_num);
        if (is_prime(p_num))
            printf("The number %d is Prime.", p_num);
        else
            printf("The number %d is Not a Prime number.", p_num);
        break;
    case 2:
        printf("Enter a number: ");
        scanf("%d", &a_num);
        if (is_armstrong(a_num))
            printf("The number %d is Armstrong", a_num);
        else
            printf("The number %d is Not a Armstrong number", a_num);
        break;
    case 3:
        printf("Enter the value of n anf r: ");
        scanf("%d%d", &n, &r);
        result = find_nCr(n, r);
        printf("The nCr of n=%d and r=%d is %ld", n, r, result);
        break;
    case 4:
        printf("Enter the value of n and r: ");
        scanf("%d%d", &n, &r);
        result = find_nPr(n, r);
        printf("The nPr of n=%d and r=%d is %ld", n, r, result);
        break;
    case 5:
        printf("Please Enter any alphabet: ");
        scanf(" %c", &Ch);
        upper = to_upper(Ch);
        printf("Uppercase of Entered character is %c", upper);
        break;
    case 6:
        printf("Please Enter any alphabet: ");
        scanf(" %c", &Ch);
        lower = to_lower(Ch);
        printf("Lowercase of Entered character is %c", lower);
        break;
    case 7:
        printf("Please Enter ant alphabate: ");
        fflush(stdin);
        scanf("%c", &Ch);
        if (is_upper(Ch))
            printf("Given character is in Uppercase character.");
        else
            printf("Given character is not in Uppercase character.");
        break;
    case 8:
        printf("Please Enter any alphabate: ");
        fflush(stdin);
        scanf("%c", &Ch);
        if (is_lower(Ch))
            printf("Given character is in Lowercase character.");
        else
            printf("Given character is Not in Lowercase.");
        break;
    case 9:
        printf("Please Enter any Character. ");
        fflush(stdin);
        scanf("%c", &Ch);
        if (is_digit(Ch))
            printf("Given character is Digit.");
        else
            printf("Given character is Not a Digit.");
        break;
    case 10:
        printf("Please Enter any Character.");
        fflush(stdin);
        scanf("%c", &Ch);
        if (is_alphabet(Ch))
            printf("Given character is a Alphabet.");
        else
            printf("Given charcter is Not a Alphabet.");
        break;
    case 11:
        printf("Enter the Base and Power of the Exponents: ");
        scanf("%d%d", &base, &exp);
        power = exponents(base, exp);
        printf("Given base %d to the power %d is %d", base, exp, power);
        break;
    case 12:
        printf("Enter a number: ");
        scanf("%d", &n);
        fact = find_factorial(n);
        printf("The factorial of Given number is %ld", fact);
        break;
    }
    getch();
}

int is_prime(int p_num)
{
    int num, i;
    if (p_num <= 1)
        return 0;
    else if (p_num == 2)
        return 1;
    num = p_num / 2;
    for (i = 2; i <= num; i++)
    {
        if (p_num % i == 0)
            return 0;
        else
            return 1;
    }
}

int is_armstrong(int a_num)
{
    int num, pre_value, store = 0, rem;
    pre_value = a_num;
    while (a_num > 0)
    {
        rem = a_num % 10;
        store = store + (rem * rem * rem);
        a_num = a_num / 10;
    }
    if (pre_value == store)
        return 1;
    else
        return 0;
}

long factorial(int num)
{
    int i;
    long fact = 1;
    for (i = 1; i <= num; i++)
        fact = fact * i;
    return fact;
}

long find_nCr(int n, int r)
{
    long result;
    result = factorial(n) / (factorial(r) * factorial(n - r));
    return result;
}

long find_nPr(int n, int r)
{
    long result;
    result = factorial(n) / factorial(n - r);
    return result;
}

char to_upper(char Ch)
{
    if (Ch >= 97 && Ch <= 122)
    {
        Ch = Ch - 32;
        return Ch;
    }
    else if(Ch >= 65 && Ch <= 90)
        return Ch;
}

char to_lower(char Ch)
{
    if(Ch >= 65 && Ch <= 90)
    {
        Ch = Ch + 32;
        return Ch;
    }
    else if(Ch >= 97 && Ch <= 122)
        return Ch;
}

char is_upper(char Ch)
{
    if (Ch >= 'A' && Ch <= 'Z')
        return 1;
    else
        return 0;
}

char is_lower(char Ch)
{
    if (Ch >= 'a' && Ch <= 'z')
        return 1;
    else
        return 0;
}

char is_digit(char Ch)
{
    if (Ch >= '0' && Ch <= '9')
        return 1;
    else
        return 0;
}

char is_alphabet(char Ch)
{
    if ((Ch >= 'a' && Ch <= 'z') || (Ch >= 'A' && Ch <= 'Z'))
        return 1;
    else
        return 0;
}

double exponents(int base, int exp)
{
    double power;
    power = pow(base, exp);
    return power;
}

long find_factorial(int num)
{
    int i;
    long fact = 1;
    for (i = 1; i <= num; i++)
        fact = fact * i;
    return fact;
}
