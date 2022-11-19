#include <stdio.h>
#include "../include/aa.h"

int aa(void)
{
    printf("Greeting from %s in file %s.\n", __func__, __FILE__);
    return 0;
}