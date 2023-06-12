// Write a program to input, output of two matrix with the following function addition, subtraction and transpose

#include <stdio.h>
#include <conio.h>

int i, a[20][20], b[20][20], j, k;
void main()
{
    int choice;
    void find_addition();
    void find_subtraction();
    void find_transpose();

    printf("MENU:\n1: Addition of a Mtrix.\n2: Subtraction of a Matrix.\n3: Transpose of a Matrix.\nEnter Your Choice:\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        find_addition();
        break;

    case 2:
        find_subtraction();
        break;

    case 3:
        find_transpose();
        break;
    dafault:
        break;
    }
    getch();
}
void find_addition()
{
    int n, sum[20][20];
    printf("Enter the no. of element in which you wnat to print: ");
    scanf("%d", &n);

    printf("Enter the element of Matrix a: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Element a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the element of Matrix b: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Element b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    //Adding...
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
           sum[i][j] = a[i][j] + b[i][j];
        }
    }
 
    printf("The Addition of Matrix a and Matrix b:\n");
    for(i = 0; i < n; i++)
    {
        for (j = 0; j< n; j++)
        {
           printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}

void find_subtraction()
{
    int n, sub[20][20];
    printf("Enter the no. of element in which you wnat to print: ");
    scanf("%d", &n);
    printf("Enter the element of Matrix a: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Element a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the element of Matrix b: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Element b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Subtracting...
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
           sub[i][j] = a[i][j] - b[i][j];
        }
    }
 
    printf("The Subtraction of Matrix a and Matrix b:\n");
    for(i = 0; i < n; i++)
    {
        for (j = 0; j< n; j++)
        {
           printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }
}

void find_transpose()
{
    int n, trans[20][20];
    printf("Enter the no. of element in which you wnat to print: ");
    scanf("%d", &n);
    printf("Enter the element of Matrix a: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Element a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Given Matrix...\n");
    for(i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
           printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    //Converting...
    for(i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            trans[j][i] = a[i][j];
        }
    }

    printf("Transpose Matrix of given Matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }
}
