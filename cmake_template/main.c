# include <stdio.h>
# include "./dory/dory.h"
# include "./marlin/marlin.h"
# include "./nemo/nemo.h"

int main(int argc, char * argv[])
{
    printf("Rule_base makefile template.\n");

    dory();
    marlin();
    nemo();

    return 0;
}