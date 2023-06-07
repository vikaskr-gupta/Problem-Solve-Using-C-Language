// 1.	Write a program to calculate the insurance amount based upon the given condition  
// if age 21-30 then the amount is 10000, if age 31-40 then the amount is 15000, if age 41-50 then the amount is 20000, if age 51-60 then the amount is 40000 otherwise, insurance is not possible
// but if gender is female there is a discount of 10% in the insurance amount, if the insurer is a smoker then the amount will be increased by 10%

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int age;
    float amount, amount_inc = 0, Final_amount, disc = 0;
    char Gender, Smoker;

    printf("Enter Your Age: \n");
    scanf("%d", &age);

    printf("Enter Your Gender, Enter M for Male and F for Female: \n");
    fflush(stdin);
    scanf("%c", &Gender);

    printf("Are You A Smoker, Enter Y for Yes and N for No: \n");
    fflush(stdin);
    scanf("%c", &Smoker);

    if(age >= 21 && age <= 30)
    {
        amount = 10000;
    }
    else if(age >= 31 && age <= 40)
    {
        amount = 15000;
    }
    else if(age >= 41 && age <= 50)
    {
        amount = 20000;
    }
    else if(age >= 51 && age <= 60)
    {
        amount = 40000;
    }
    else
    {
        printf("Insurence is Not Possible");
        exit(1);
        getch();
    }
    
    if(Gender == 'F')
    {
        disc = amount*10/100;
    }

    if(Smoker == 'Y')
    {
        amount_inc = amount*10/100;
    }

    Final_amount = amount - disc + amount_inc;
    printf("%f", Final_amount);
    getch();
}
