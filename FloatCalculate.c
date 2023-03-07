#include <stdio.h>
#include <string.h>

int main() {
    float num1, num2, summ, quotient, difference, multipliers;

    char symbol[2];

    printf("Два числа(с плавающей точкой): ");

    if (scanf("%f %c %f",&num1,&symbol[0],&num2) !=3){
        printf("Ошибка ввода данных!\n");
        return 1;
    }

    summ = num1 + num2;
    quotient = num1 / num2;
    difference = num1 - num2;
    multipliers = num1 * num2;

    if (strcmp(symbol, "+")==0){
        printf("%f\n", summ);
    }

    if (strcmp(symbol, "-")==0){
        printf("%f\n", difference);
    }
    
    if (strcmp(symbol, "/")==0){
        printf("%f\n", quotient);
    }

    if (strcmp(symbol, "*")==0){
        printf("%f\n", multipliers);
    }

    return 0;
}