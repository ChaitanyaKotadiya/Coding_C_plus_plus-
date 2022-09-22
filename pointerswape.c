#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p, *q, temp;
    int a, b;
    p=&a;
    q=&b;
    printf("enter the a\n");
    scanf("%d", &a);
    printf("enter the b\n");
    scanf("%d", &b);
    temp = *p;
    *p = *q;
    *q = temp;
    printf("the a is %d", *p);
    printf("the b is %d", *q);
}