#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARRAY_LENGTH 10
#define NUMBERS_AMOUNT 1000000

void arrays(){

    srand(time(NULL));

    int frequency[ARRAY_LENGTH] = {};

    int a, i;
    for (i = 0; i < NUMBERS_AMOUNT; i++){
        a = rand() % ARRAY_LENGTH;
        frequency[a]++;
    }

    for (i = 0; i < ARRAY_LENGTH; i++){
        printf("\nNumber %d was generated %6d times (%5.2f%%)",
               i,
               frequency[i],
               (float)frequency[i] / NUMBERS_AMOUNT * 100 );
    }

}

