#include <stdio.h>

void switch_test(){

    float a;
    float b = 0;
    int op;

    printf("Enter the first operand: ");
    scanf("%f", &a);

    printf("Enter the operator: ");
    printf("1 = +, 2 = -, 3 = *, 4 = //: ");
    scanf("%d", &op);

    do {
        printf("Enter the second operand: ");
        scanf("%f", &b);
    } while ((op == 4) && (b == 0));

    char c;
    float result;
    switch (op) {
        case 1:
            c = '+';
            result = a + b;
            printf("%f %c %f = %f", a, c, b, result);
            break;
        case 2:
            c = '-';
            result = a - b;
            printf("%f %c %f = %f", a, c, b, result);
            break;
        case 3:
            c = '*';
            result = a * b;
            printf("%f %c %f = %f", a, c, b, result);
            break;
        case 4:
            c = '/';
            result = a / b;
            printf("%f %c %f = %f", a, c, b, result);
            break;
        default:
            break;

    }

}