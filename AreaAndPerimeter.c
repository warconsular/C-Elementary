/* Напишите программу, которая запрашивает у пользователя длину и ширину прямоугольника и выводит его площадь и периметр.*/

#include <stdio.h>
#include <string.h>

int main() {
    int a_side, b_side, Area, Perimeter;
    char operation;


    printf("Введите две стороны: ");
    scanf("%d %d",&a_side, &b_side); 

    printf("Какое действие с ними воспроизвести (введите $ для вычисления площади, ! для вычисления периметра): ");
    scanf(" %c", &operation);

    if (operation == '$')
    {
        Area = a_side * b_side; 
        printf("Площадь прямоугольника: %d\n", Area);
    } else if (operation == '!')
    {
        Perimeter = a_side*2 + b_side*2;
        printf("Периметр прямоугольника: %d\n", Perimeter);
    } else {
        printf("Ошибка!\n");
        return 1;   
    }
    
    return 0;
}