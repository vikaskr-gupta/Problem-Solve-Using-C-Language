#include <stdio.h>
#include <conio.h>

// void main()
// {
//     int i, a[5];
//     printf("Enter five numbers:\n");
//     for(i=0; i<5; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     getch();
// }

void main()
{
    int i, a[5], *p;
    p = &a[0];
    for (i = 0; i < 5; i++)
    {
        scanf("%d", p + i);
    }
    getch();
}
