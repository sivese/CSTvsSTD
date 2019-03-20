#include "pfmc.h"
#include <time.h>

double timer(void (*work)()){
    clock_t start, stop;
    start = clock();

    work();

    stop = clock();
    return stop - start;
}
