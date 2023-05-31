/*Дано масив цілих чисел a[i], і = 1, … , n. Знайти кількість від'ємних елементів. Якщо
ця кількість більша за середнє арифметичне всіх чисел масиву, то збільшити кожен елемент
масиву на 10, в протилежному випадку вивести нулі.*/

#include <stdio.h>

int main() {
    int n;
    int a[100]; // Максимальний розмір масиву - 100
    int sum = 0;
    int negativeCount = 0;

    printf("Введіть розмір масиву (n): ");
    scanf("%d", &n);

    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] < 0) {
            negativeCount++; // Лічильник від'ємних елементів
        }
        sum += a[i]; // Обчислення суми елементів масиву
    }

    double average = (double)sum / n; // Середнє арифметичне елементів масиву

    if (negativeCount > average) { // Перевірка умови
        printf("Кількість від'ємних елементів більша за середнє арифметичне.\n");
        printf("Збільшені елементи масиву на 10:\n");
        for (int i = 0; i < n; i++) {
            a[i] += 10; // Збільшення елементу на 10
            printf("%d ", a[i]); // Виведення зміненого елементу
        }
        printf("\n");
    } else {
        printf("Кількість від'ємних елементів не більша за середнє арифметичне.\n");
        printf("Виведення нулів:\n");
        for (int i = 0; i < n; i++) {
            printf("0 "); // Виведення нуля
        }
        printf("\n");
    }

    return 0;
}