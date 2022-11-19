#include <stdio.h>
#include "../include/foo.h"
#include "../include/bb.h"

int foo(void)
{
    printf("Greeting from %s in file %s.\n", __func__, __FILE__);
    bb();
    return 0;
}