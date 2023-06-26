#include <stdio.h>
#include <conio.h>

struct stud_detail
{
    char name[20];
    int roll;
    char library_id[20];
};

struct coll_detail
{
    char coll_name[20];
    char block[5];
    struct stud_detail det;
};

void main()
{
    int n, i;
    struct coll_detail stud;

    printf("Enter the number of Students you wanted to print Detail: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Student Detail no. %d:", i);

        printf("\nCollege Name: ");
        scanf("%s", &stud.coll_name);
        fflush(stdin);

        printf("Enter Bolck: ");
        fflush(stdin);
        scanf("%s", &stud.block);

        printf("Student Name: ");
        fflush(stdin);
        scanf("%s", &stud.det.name);

        printf("Roll No. : ");
        fflush(stdin);
        scanf("%d", &stud.det.roll);

        printf("Library Id: ");
        fflush(stdin);
        scanf("%s", &stud.det.library_id);
        printf("\n");
    }
    getch();
}
