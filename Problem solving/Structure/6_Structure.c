#include<stdio.h>
#include<conio.h>

struct player{
    char name[20];
    char country[20];
    float batt_ava;
}d[20];

void main()
{
    int i, n;

    printf("Enter the number of Player: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("Player No. %d:\n", i);
        printf("Player Name: ");
        scanf("%s", &d[i].name);

        printf("Country: ");
        scanf("%s", &d[i].country);

        printf("Avarage Score: ");
        scanf("%f", &d[i].batt_ava);
        printf("\n");
    }
    for(i=1; i<=n; i++)
    {
        printf("%s : %f\n", d[i].country, d[i].batt_ava);
    }
    getch();
}
