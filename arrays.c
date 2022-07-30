#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
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

void printArray(int * array, int length){
    int i;
    for (i = 0; i < length; i++){
        printf("%d ", array[i]);
    }
}

float mean(const int * array, int length){
    int i = 0;
    float result = 0;
    for (i = 0; i < length; i++){
        result += *(array + i);
    }
    return result / length;
}

void arrays2(){

    int i = 0;
    float result = 0;
    int array[ARRAY_LENGTH] = {};

    while (i < ARRAY_LENGTH){
        printf("Enter a number no.%d", i + 1);
        scanf("%d", array + i);
        i++;
    }

    printf("Array: \n");
    printArray(array, ARRAY_LENGTH);

    printf("\nThe mean is: \n");
    printf("%f", mean(array, ARRAY_LENGTH));
}

int calculateSquareEquality(int a, int b, int c, float* x1, float* x2){
    /** Solves square equation ax^2 + bx + c = 0 **/

    if (a == 0){
        *x1 = -c / b;
        return 0;
    }

    double d = b * b - 4 * a * c;
    if (d < 0) {
        return -1;
    }
    else if (d == 0) {
        *x1 = - b / (2 * a);
        *x2 = *x1;
        return 0;
    }
    else{
        d = sqrt((double)d);
        *x1 = (-b + d) / (2 * a);
        *x2 = (-b - d) / (2 * a);
        return 1;
    }
}

int find_odd(int * array, int length){
    int i = 0;
    int result = 0;
    for (i = 0; i < length; i++){
        if (*(array + i) % 2) {
            *(array + i) = *(array + i) * 2;
            result = 1;
        }

    }
    return result;
}

void print_short_type(int * array, int length){

    int i = 0;
    short s;
    for (i = 0; i < length; i++){
        printf("%d ", (short)*(array + i));
    }

}

