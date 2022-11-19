#include <stdio.h>
#include "../include/bb.h"

int bb(void)
{
    printf("Greeting from %s in file %s.\n", __func__, __FILE__);
    return 0;
}