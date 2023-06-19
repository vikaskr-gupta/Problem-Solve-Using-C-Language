#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10], b[10][10], addition[10][10], i, j, r, c;

    printf("Enter the number of Row you  wanted to print: ");
    scanf("%d", &r);
    printf("Enter the number of Column you wanted to print: ");
    scanf("%d", &c);

    //Input Data for a Matrix
    printf("Enter First Matrix Elements...\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("Enter element no. a%d%d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    //Input Data for b Matrix
    printf("Enter Second Matrix Elements...\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("Enter element no. b%d%d: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for(i=0;i<=r;i++)
    {
        for(j=0;j<=c;j++)
        {
            addition[i][j] =a[i][j]+b[i][j];
        }
    }
    //Output Data for Multiplication Matrix
    printf("The addition of both matrix is...\n");
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("\t%d", addition[i][j]);
        }
        printf("\n");
    }
    getch();
}
