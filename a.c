#include <stdio.h>
#include "b.h"

int main()
{
    int val_a = 10;
    int val_b = 25;
    int val_s = 0;

    printf("Hello world!\n");
    
    val_s = add(val_a, val_b);
    printf("a + b = %d\n", val_s);

    return 0;
}
