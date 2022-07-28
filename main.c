#include <stdio.h>
//#include <math.h>

void switch_test();
void cycles_test();
void make_triangle();
void arrays();

void swap(int * a, int * b){
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}

void isPrime (int a){
    int i;
    int c = 1;
    for (i = 2; i <= a / 2; i++){
        if (a % i == 0) {
            c = 0;
            break;
        }
    }
    printf("The number %d is %sprime", a, (c == 0) ? "not ": "");
}

int main(int argc, const char* argv[]) {

    int a_swap = 20;
    int b_swap = 60;
    printf("a = %d, b = %d \n", a_swap, b_swap);
    swap(&a_swap, &b_swap);
    printf("a = %d, b = %d \n", a_swap, b_swap);


//    cycles_test();
//    switch_test();
    make_triangle();

    int a;
    printf("Enter a integer:");
    scanf("%d", &a);
    isPrime(a);

    arrays();

    return 0;
}
