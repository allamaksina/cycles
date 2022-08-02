#include <stdio.h>
//#include <math.h>

void switch_test();
void cycles_test();
void make_triangle();
void arrays();
void arrays2();
int calculateSquareEquality(int a, int b, int c, float* x1, float* x2);
int find_odd(int * array, int length);
void print_short_type(unsigned int * array, int length);
void mult_table(int rows, int cols);
void strs();
void main_struct();
int files_main();
int main_memory();
void toBinary(int d, char* res);
void main_rect();
void printThisArray();
void printLine();

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

int main_arrays(int argc, const char* argv[]) {

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

//    arrays2();

    int b;
    int c;
    float x1 = 0;
    float x2 = 0;

    printf("\n Enter a");
    scanf("%d", &a);
    printf("\n Enter b");
    scanf("%d", &b);
    printf("\n Enter c");
    scanf("%d", &c);

    int z = calculateSquareEquality(a, b, c, &x1, &x2);

    printf("this equation has %d roots: %f, %f", z + 1, x1, x2);

    int i;

    int array2[5] = {2, 3, 4, 6, 9};
    int res = find_odd(array2, 5);
    if (res == 1){

        printf("\n%d\n", res);
        for (i = 0; i < 5; i++){
            printf("%d ", array2[i]);
        }
    }

    unsigned int array3[3] = {375927645, 65535, 65536};
    print_short_type(array3, 3);

    printf("\n");
    mult_table(10, 10);

    return 0;
}

int main(int argc, const char* argv[]){

    printLine();
//    printThisArray();
//    main_rect();
//    char res[255] = "";
//    toBinary(123, res);
//    puts(res);
//    main_memory();
//    files_main();
//    main_struct();
//        strs();


    return 0;
}
