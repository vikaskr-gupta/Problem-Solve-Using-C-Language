#include<stdio.h>
#include<conio.h>

struct detail{
    int roll;
    char name[20];
}d1[3];

struct suject{
    int eng;
    int math;
    int c;
    int coa;
    int dm;
}d2[3];

void main()
{
    int i;
    float percentage;
    printf("Enter the Studebt detail:\n");
    for(i=0; i<=1; i++)
    {
        printf("Student: %d\n", i+1);
        printf("Roll no. : ");
        scanf("%d", &d1[i].roll);

        printf("Name: ");
        scanf("%s", &d1[i].name);

        printf("English: ");
        scanf("%d", &d2[i].eng);
        
        printf("Maths: ");
        scanf("%d", &d2[i].math);

        printf("C: ");
        scanf("%d", &d2[i].c);

        printf("COA: ");
        scanf("%d", &d2[i].coa);

        printf("DM: ");
        scanf("%d", &d2[i].dm);
    }

    for(i=0; i<=1; i++)
    {
        percentage = (d2[i].eng+d2[i].math+d2[i].c+d2[i].coa+d2[i].dm)/5;
        if(percentage >= 80)
        {
            printf("%d:\t", d1[i].roll);
            printf("%s\t", d1[i].name);
            printf("%f%\n\n", percentage);
        }
    }
    getch();
}
