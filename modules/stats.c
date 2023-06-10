#include "stats.h"

int stats_find_min(int array[], int size){
    int min = INT_MAX;

    for(int i = 0; i < size; i++){
        if(array[i] < min){
            min = array[i];
        }
    }

    return min;
}


int stats_find_max(int array[], int size){
    int max = INT_MIN;

    for(int i = 0; i < size; i++){
        if(array[i] > max){
            max = array[i];
        }
    }

    return max;
}