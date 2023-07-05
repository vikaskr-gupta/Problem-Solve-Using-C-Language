#include <stdio.h>
#include <conio.h>
void main()
{
    int n1=0 , n2=1 , n3, num, i;
    printf("Here, we are printing FIBONACII SERIES\n");
    printf("Enter the Number of element : ");
    scanf("%d",&num);
    printf("%d%d\n",n1,n2);
    // scanf("%d", &y);
    for (i=2; i<=num; ++i)
    {
        n3 = n1+n2;
        printf("%d\n",n3);
        n1 = n2;
        n2 = n3;
    }
    getch();
}
