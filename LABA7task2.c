#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main() {

    setlocale(LC_ALL, "Russian");

    float x = 0.0f;
    float y = 0.0f;
    char c = 0;

    printf("Введите выражение в формате (число знак число), например: 5 + 3\n");
    printf("Поддерживаемые действия: +, -, *, /, а также ^ (степень):\n> ");

    scanf("%f %c %f", &x, &c, &y);

    printf("Результат ");

    switch (c) {
    case '+':
        printf("сложения: %.2f + %.2f = %.2f\n", x, y, x + y);
        break;

    case '-':
        printf("вычитания: %.2f - %.2f = %.2f\n", x, y, x - y);
        break;

    case '*':
        printf("умножения: %.2f * %.2f = %.2f\n", x, y, x * y);
        break;

    case '/':
       
        if (y == 0.0f) {
            printf("ошибка: деление на ноль!\n");
        }
        else {
            printf("деления: %.2f / %.2f = %.2f\n", x, y, x / y);
        }
        break;

    case '^':
        printf("возведения в степень: %.2f ^ %.2f = %.2f\n", x, y, pow(x, y));
        break;

    default:
        printf("ошибка: неизвестная операция '%c'\n", c);
        break;
    }

    return 0;
}