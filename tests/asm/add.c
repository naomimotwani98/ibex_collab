#include<stdio.h>
#include <stdio.h>

int sum(int a, int b);

int main()
{
    int a = 5, b = 6;
    int c = sum(a,b);
    return 0;
}

int sum(int a, int b)
{
    return a+b;
}
