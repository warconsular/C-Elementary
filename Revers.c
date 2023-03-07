#include <stdio.h>
#include <string.h>

int main() {
    char symbol[2];
    printf("Два символа, которые хотите перестановить: ");
    scanf("%c %c", &symbol[0], &symbol[1]);
    printf("Наоборот: %c %c\n", symbol[1], symbol[0]);
    return 0;
}