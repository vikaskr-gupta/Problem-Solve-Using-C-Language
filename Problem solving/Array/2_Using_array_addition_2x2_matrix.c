#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10], b[10][10], c[10][10], sum, i, j;

    printf("Enter 10 values:\n");
    //Input Matrix
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    //Addition of Matrix
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    //Output Matrix
    printf("Addition values:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("\t%d", c[i][j]);
        }
        printf("\n");
    }
    getch();
} 
