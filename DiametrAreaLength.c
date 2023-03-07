#include <stdio.h>

int main() {

    int radius, diameter, area, length;
    char flag;
    const float pi = 3.14;
    
    
    printf("Введите число: ");
    scanf("%d", &radius);

    printf("Какую операцию хотите воспроизвести?: ");
    scanf(" %c", &flag);
    getchar();

    if (flag == '!'){
        diameter = radius * 2;
        printf("Диаметр: %d\n", diameter);
    } else if (flag == '@'){
        area = pi * (radius * radius);
        printf("Площадь: %d\n", area);
    } else if (flag == '#'){
        diameter = radius * 2;
        length = pi * diameter;
        printf("Длина окружности: %d\n", length);
    } else {
        printf("Ошибка!\n");
        return 1;
    }
    
    
    
    return 0;
}