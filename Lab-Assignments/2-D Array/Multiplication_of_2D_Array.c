// Program to perform various operations on two-dimensional arrays in C language
// Write a program to multiply two matrix using functions


#include<stdio.h>
#include<conio.h>
void main()
{
    int a[20][20], b[20][20], mul[20][20], i, j, k, n;
    void matrix_multiplication(int);

    printf("Enter the no. of matrix you wanted to print:\n");
    scanf("%d", &n);
    printf("Enter element of Matrix a:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Element no. a[%d][%d]= ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter element of Matrix b:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Element no. b[%d][%d]= ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    //Multiplying...
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            for(k=0; k<n; k++)
            {
                mul[i][j] = a[i][k] * b[k][j];
            }
        }
    }

    printf("The multiplication of givan matrix:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    getch();
}
