#include <stdio.h>
#include "../inc/func.h"

int func(void)
{
    printf("Greeting from %s in file %s.\n", __func__, __FILE__);
    return 0;
}