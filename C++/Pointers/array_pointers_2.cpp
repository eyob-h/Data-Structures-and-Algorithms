#include <iostream>
#include <stdio.h>

int main()
{

    int A[5] = {80, 88, 96, 42, 35};
    int *p;
    p = A;
    printf("%d\n", p);
    printf("%d\n", *p);

    int *p2;
    p2 = p + 1;
    printf("%d\n", p2);
    printf("%d\n", *p2);

    return 0;
}