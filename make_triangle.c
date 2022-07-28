#include <stdio.h>

void make_triangle(){

    int lines;
    printf("Enter number of lines:");
    scanf("%d", &lines);

    int i;
    int j;

    for (i = 0; i < lines; i++){

        for (j = 1; j < lines - i; j++)
            printf(" ");

        for (j = lines - i * 2; j <= lines; j++)
            printf("^");

        printf("\n");
    }

};