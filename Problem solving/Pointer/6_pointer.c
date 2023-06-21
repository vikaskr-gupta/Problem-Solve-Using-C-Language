#include <stdio.h>
#include <conio.h>
int i;
void main()
{
    int a[5];

    void input(int *);
    void display(int *);
    void swap(int *);

    printf("Enter Five Value:\n");
    input(a);
    display(a);
    printf("\n\n");
    swap(a);
    printf("\n\n");
    display(a);
    getch();
}

void input(int *p)
{
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", p + i);
    }
}
void display(int *p)
{
    for (i = 0; i <= 4; i++)
    {
        printf("%d\t", *(p + i));
    }
}
void swap(int *p)
{
    int j, s;
    for (i = 0; i <= 4; i++)
    {
        for (j = 0; j <= 4; j++)
        {
            if (p[j] > p[j + 1])
            {
                s = p[j];
                p[j] = p[j + 1];
                p[j + 1] = s;
            }
        }
    }
}
