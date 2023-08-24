#include <stdio.h>
void Division(int, float);
void main()
{
    int a;
    float b;
    printf("Enter two number : ");
    scanf_s("%d%f", &a, &b);
    Division(a, b);
}
void Division(int a, float b)
{
    float c;
    c = a / b;
    printf("Division result is : %f", c);
}
