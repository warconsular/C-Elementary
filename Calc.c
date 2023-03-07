#include <stdio.h>
#include <string.h>

int main() {
    int num1, num2, sum, multipliers, difference, quotient;
    printf("Два числа: ");
    char flag[2];
    scanf("%d %s %d",&num1, flag, &num2);
    sum = num1 + num2;
    multipliers = num1 * num2;
    difference = num1 - num2;
    quotient = num1 / num2;
    
    if (strcmp(flag, "+")==0) {
        printf("Результат: %d\n", sum);
    }
    
    if (strcmp(flag, "*")==0) {
        printf("Результат: %d\n", multipliers);
    }

    if (strcmp(flag, "-")==0) {
        printf("Результат: %d\n", difference);
    }

    if (strcmp(flag, "/")==0) {
        printf("Результат: %d\n", quotient);
    }

    return 0;
}