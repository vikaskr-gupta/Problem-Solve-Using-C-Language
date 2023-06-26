#include<stdio.h>
#include<conio.h>

struct book {
    int book_id;
    char title[20];
    float price;
};

void main()
{
    struct book b1;
    printf("Enter the Book Details:\n");

    printf("Book ID: ");
    scanf("%d", &b1.book_id);

    printf("Book Title: ");
    scanf("%s", &b1.title);
    fflush(stdin);

    printf("Book Price: ");
    scanf("%f", &b1.price);
    getch();
}
