#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    int array[100]; // Максимальний розмір масиву - 100

    printf("Введіть розмір масиву (n): ");
    scanf("%d", &n);

    srand(time(NULL)); // Ініціалізація генератора псевдовипадкових чисел

    printf("Заповнений масив:\n");
    for (int i = 0; i < n; i++) {
        array[i] = rand() % 201 - 100; // Генерація псевдовипадкового числа з відрізка [-100; 100]
        printf("%d ", array[i]);
    }
    printf("\n");

    int countLessThanSeven = 0; // Лічильник елементів менших за 7
    int firstPositiveIndex = -1; // Індекс першого додатнього елементу
    int lastPositiveIndex = -1; // Індекс останнього додатнього елементу
    int sumBetweenPositives = 0; // Сума елементів між першим й останнім додатнім елементом

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
    printf("Сума елементів масиву, розташованих між першим й останнім додатними елементами: %d\n", sumBetweenPositives);

    return 0;
}