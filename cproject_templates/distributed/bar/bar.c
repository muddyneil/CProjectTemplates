#include <stdio.h>
#include "../include/bar.h"
#include "../include/aa.h"

int bar(void)
{
    printf("Greeting from %s in file %s.\n", __func__, __FILE__);
    aa();
    return 0;
}