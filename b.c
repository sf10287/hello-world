#include <stdio.h>
#include "b.h"

int add(int x, int y)
{
    int sum = 0;

    sum = x + y;
    printf("x + y = %d\n", sum);

    return sum;
}
