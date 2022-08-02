#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <math.h>

/* 1. Описать функцию, возвращающую строку с двоичным представлением
 * десятичного числа, переданного в аргументе этой функции.
*/

void toBinary(int d, char* res){

    char out[64];

    int i = 0;
    int temp = d;
    while (temp){
        temp = temp >> 1;
        i++;
    }

    // end of array
    out[i] = '\0';

    while (d != 0){
        out[--i] = (d % 2) ? '1' : '0';
        d = d >> 1;
    }
    strcat(res, out);
}

/*
* 2. Описать структуру "прямоугольник", содержащую целочисленные значения длины,
* ширины, периметра и площади прямоугольника. Написать функцию, принимающую на вход
* указатель на структуру, подсчитывающую и записывающую площадь и периметр данного
* прямоугольника в структуру. */

typedef struct rectangle{
    int height;
    int width;
    int square;
    int perimeter;
} Rectangle;

void evalRect(Rectangle* r){
    r -> square = 0;
    r -> perimeter = 0;
    if (r -> height){
        if (r -> width){
            r -> square = r -> height * r -> width;
            r -> perimeter = 2 * (r -> height + r -> width);
        }
    }
}

void main_rect(){

    Rectangle r;

    printf("Enter height: ");
    scanf("%d", &r.height);
    printf("Enter width: ");
    scanf("%d", &r.width);

    evalRect(&r);

    printf("Square = %d, Perimieter = %d", r.square, r.perimeter);

}

/* Написать функцию-обёртку, возвращающую указатель на область памяти, которую затем можно
 * использовать как массив из элементов типа integer. Количество элементов указывается в
 * аргументе функции. Массив должен быть гарантированно инициализирован нулями.
 * Для проверки - заполните этот массив и выведите на экран.*/

int* arrayInit(int l){
    return calloc(l, sizeof(int));
}

void printThisArray(){

    const int ARR_SIZE = 5;
    int * arr = arrayInit(ARR_SIZE);
    int i;

    for (i = 0; i < ARR_SIZE; i++) *(arr + i) = i * 10;

    for (i = 0; i < ARR_SIZE; i++) printf("%d ", arr[i]);

    free(arr);
}

/* описать структуру отрезок, которая состоит из длины и 2 точек. Точка тоже структура */

typedef struct point{
    double x;
    double y;
} Point;

typedef struct line{
    double length;
    Point p1;
    Point p2;
} Line;

Line evalLine(Point p1, Point p2){

    Line l;
    l.p1 = p1;
    l.p2 = p2;

    l.length = sqrt(pow((p1.x - p2.x), 2.0) + pow((p1.y - p2.y), 2.0));

    return l;

}

void printLine(){

    Point a;
    Point b;
    printf("Enter a.x:");
    scanf("%lf", &a.x);
    puts("");
    printf("Enter a.y:");
    scanf("%lf", &a.y);
    puts("");
    printf("Enter b.x:");
    scanf("%lf", &b.x);
    puts("");
    printf("Enter b.y:");
    scanf("%lf", &b.y);
    puts("");

    Line l = evalLine(a, b);

    printf("First point = (%.3lf, %.3lf)\n", l.p1.x, l.p1.y);
    printf("Second point = (%.3lf, %.3lf)\n", l.p2.x, l.p2.y);
    printf("Line length: %.3lf", l.length);


}