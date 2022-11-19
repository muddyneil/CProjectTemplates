#include <stdio.h>
#include "./include/bar.h"
#include "./include/foo.h"

int main(void)
{
    printf("*********************************************\n");
    printf("C Project demo ...\n");

    printf("Greeting from %s in file %s.\n", __func__, __FILE__);

    foo();
    bar();

    printf("C Project demo end.\n");
    printf("*********************************************\n");

    return 0;
}