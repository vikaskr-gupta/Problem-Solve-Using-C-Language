#include <stdio.h>
#include <conio.h>
void main()
{
    int x = 5, y;
    int *p, **q, ***r;
    int *s, **t, ***v;

    p = &x;
    q = &p;
    r = &q;

    s = &y;
    t = &s;
    v = &t;

        *s = 7; //*p is pointing to x and direct assign through p
    //**q = 9;  // **q is pointing to x and direct assign through q
    //***r = 76; // ***r is pointing to x and dirct assign through r

    printf("%d\n", x);          // 5
    printf("%d\n", &x);         // 6422300
    printf("%d\n", *&x);        // 5
    printf("%d\t%u\n", x, p);   // 5    6422300
    printf("%d\t%u\n", *p, &x); // 5    6422300
    printf("%u\n", *&p);          // 6422300

    printf("%u\n", *s);
    printf("%u\n", **t);
    printf("%u", ***v);
    getch();
}
