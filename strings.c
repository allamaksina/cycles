//
// Created by alla on 01.08.22.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void helloFun(char* name, char* out){
    char welcome[256] = "Hello, ";
    name[0] = tolower(name[0]);
    if(strcmp(name, "yaya") == 0){
        strcpy(name, "Boss!");
    }
    name[0] = toupper(name[0]);
    strcat(welcome, name);
    strcpy(out, welcome);
}

void strs(){

    char string1[255] = "This is a test string";
    //or
    char * string2 = "This is a second test string";

    printf("%s\n", string1);
    printf("%s\n", string2);

    string1[5] = 'Y';
    printf("%s\n", string1);

    char name[255];
    char res[256];
    gets(name);
    helloFun(name, res);
    puts(res);

    char num[64];
    printf("\n");
    puts("Enter a number: ");
    gets(num);
    int number = atoi(num);
    number *= number;
    printf("\n");
    printf("Squared number: %d", number);


}


