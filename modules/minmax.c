#include <stdio.h>
#include "stats.h"

int main(){
    int array[] = {3,4,6, 24, 77};

    printf("min: %d\n", stats_find_min(array, 5));
    printf("max: %d\n", stats_find_max(array, 5));
}