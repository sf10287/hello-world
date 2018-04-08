#include <stdio.h>
#include "b.h"

int add(int x, int y)
{
    int sm = 0;

    sm = x + y;
    printf("x + y = %d\n", sm);

    return sm;
}
