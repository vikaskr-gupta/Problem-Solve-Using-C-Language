#include <conio.h>
#include <stdio.h>
void main()
{
    int A[10][10], B[10][10], Multiplication[10][10], i, j, k;
    printf("For Printing 3x3 Matrix...\n");
    printf("Enter Values for A Matrix\n");

    // Input value for a matrix
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Element no. A[%d][%d]", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter values for B matrix\n");
    // Input value for b matrix
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Element no. B[%d][%d]", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Internal multiplication
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
             Multiplication[i][j]=0;
            for (k = 0; k < 2; k++)
            {
                Multiplication[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    // Output Multiplication
    printf("The multiplication is...\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d", Multiplication[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    getch();
}
