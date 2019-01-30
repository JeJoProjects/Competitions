#include <stdio.h>
#include <math.h>
#include <iostream>
#include <stdlib.h>


constexpr void update(int *a,int *b)
{
    int SUM=0, diff=0;
    SUM  = *a+*b;
    diff = abs(*a-*b);
    *a=SUM;
    *b=diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
