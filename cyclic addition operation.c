#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int a, b;
    while (scanf("%d%d", &a, &b))
    {
        printf("%d", a + b);
    }
    return 0;
}