#include <stdio.h>

void cycles_test(){
        int a = 10;
    int b = 20;
    int even = 0;

    while (a < b) {
        if (a % 2 == 0)
            even++;
        a++;
    }

    printf("There are %d even numbers.\n", even);

    int input;
    do {
        printf("Enter a divider for number 1000 (you can't divide by zero!):");
        //scanf("%d", &input);
    } while (input == 0);

    printf("1000 / %d = %d\n", input, 1000 / input);
    printf("and the reminder will be %d, by the way \n", 100 % input);


    int number = 71;
    printf("Enter an integer: \n");
    scanf("%d", &number);

    int d = 2;
    int i = 2;
    while(i <= (number / 2)){
        if (number % i++ == 0){
            d++;
            break;
        }
    }
    printf("Entered number %d is %sprime\n", number, (d == 2) ? "" : "not ");

    int pow1 = 10;
    int base = 2;
    int result = 1;

    int i;
    for (i = 0; i < pow1; i++){
        result *= base;
    }

    double base1 = 2;
    double pow2 = 10;

    printf("%d", result);
    printf("%f", pow(base1, pow2));

}