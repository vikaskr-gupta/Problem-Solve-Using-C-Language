#include<stdio.h>
#include<conio.h>
int sum(int, int);
int sub(int, int);
int mul(int, int);
float div(int, int);
void main()
{
    int v,w,x,y,z;
    float p;
    printf("Enter First Number: ");
    scanf("%d", &v);
    printf("Enter Second Number: ");
    scanf("%d", &w);

    x = sum(v,w);
    printf("%d\n", x);

    y = sub(v,w);
    printf("%d\n", y);

    z = mul(v,w);
    printf("%d\n", z);

    p = div(v,w);
    printf("%f", p);
    getch();
}

int sum(int a, int b)
{
    int c;
    c = a+b;
    return c;
}

int sub(int d, int e)
{
    int f;
    f = d-e;
    return f;
}

int mul(int g, int h)
{
    int i;
    i = g*h;
    return i;
}

float div(int j, int k)
{
    float l;
    l = j%k;
    return l;
}
