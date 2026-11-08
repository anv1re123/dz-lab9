#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    char symbol;
    printf("Введите символ, из которого будет построена фигура: ");
    scanf("%c", &symbol);

    printf("\nВывод фигуры в координатной сетке:\n\n");
    for (int y = 7; y >= -3; y--) {
        int x_max;
        if (y >= 2) {
            x_max = -1; 
        }
        else {
            x_max = -3; 
        for (int x = -6; x < x_max; x++) {
            printf("%c", symbol);
        }

        printf("\n");
    }

    return 0;
}