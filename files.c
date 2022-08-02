#include <stdio.h>

int files_main() {

    FILE *f;
    f = fopen("/home/alla/new_text.txt", "w"); // r, w, a, rb, wb, ab
    if (f == NULL) return 1;
    fprintf(f, "yaya haha file is opened %d", 50);
    fclose(f);

    f = fopen("/home/alla/new_text.txt", "r"); // r, w, a, rb, wb, ab
    char w[256];
    while (!feof(f)) {
        fscanf(f, "%s ", w);
        printf("%s ", w);
    }

    fclose(f);





    return 0;

};