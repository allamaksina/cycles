#include <stdio.h>

struct fraction{
    int dividend;
    int divisor;
    int integer;
};

typedef struct fraction Fraction;

void printFr(Fraction f){
    if (f.divisor != 0){
        if (f.dividend != 0){
            if (f.integer != 0){
                printf("%d %d / %d", f.integer , f.dividend, f.divisor);
            }else
                printf("%d / %d", f.dividend, f.divisor);
        }
        else
            printf("%d", f.integer);
    } else
        printf("inf");
};

Fraction fracMult(Fraction* f1, Fraction* f2){
    Fraction result;

    result.dividend = (f1->divisor * f1->integer + f1->dividend) * (f2->divisor * f2->integer + f2->dividend);
    result.divisor = f1->divisor * f2->divisor;

    result.integer = result.dividend / result.divisor;
    result.dividend = result.dividend % result.divisor;

    return result;
};

void main_struct(){
    Fraction f1, f2, result;
    f1.integer = 0;
    f1.dividend = 1;
    f1.divisor = 5;
    f2.integer = 0;
    f2.dividend = 3;
    f2.divisor = 7;
    puts("");
    printFr(fracMult(&f1, &f2));

    Fraction f3;
    f3.integer = 5;
    f3.dividend = 3;
    f3.divisor = 8;
    puts("");
    printFr(f3);
    puts("");
    printFr(fracMult(&f2, &f3));

};