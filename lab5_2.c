/*Визначити 1) кількість елементів масиву, менших за число сім; 2) суму елементів
масиву, розташованих між першим й останнім додатними елементами.
А) З клавіатури вводиться одновимірний масив n цілих чисел.*/

#include <stdio.h>

int main() {
    int n;
    int array[100]; // Максимальний розмір масиву - 100

    printf("Введіть розмір масиву (n): ");
    scanf("%d", &n);

    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int countLessThanSeven = 0; // Лічильник елементів менших за 7
    int firstPositiveIndex = -1; // Індекс першого додатнього елементу
    int lastPositiveIndex = -1; // Індекс останнього додатнього елементу
    int sumBetweenPositives = 0; // Сума елементів між першим й останнім додатніми елементами

    for (int i = 0; i < n; i++) {
        if (array[i] < 7) {
            countLessThanSeven++;
        }

        if (array[i] > 0) {
            if (firstPositiveIndex == -1) {
                firstPositiveIndex = i;
            }
            lastPositiveIndex = i;
        }
    }

    if (firstPositiveIndex != -1 && lastPositiveIndex != -1) {
        for (int i = firstPositiveIndex + 1; i < lastPositiveIndex; i++) {
            sumBetweenPositives += array[i];
        }
    }

    printf("Кількість елементів масиву, менших за 7: %d\n", countLessThanSeven);
    printf("Сума елементів масиву, розташованих між першим й останнім додатніми елементами: %d\n", sumBetweenPositives);

    return 0;
}