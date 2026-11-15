#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int day = 0;

    printf("Введите номер дня недели (от 1 до 7): ");
    scanf("%d", &day);

    printf("\n--- РЕЗУЛЬТАТЫ ---\n");

    switch (day) {
    case 1:
        printf("День недели: Понедельник\n");
        printf("До воскресенья осталось дней: 6\n");
        break;
    case 2:
        printf("День недели: Вторник\n");
        printf("До воскресенья осталось дней: 5\n");
        break;
    case 3:
        printf("День недели: Среда\n");
        printf("До воскресенья осталось дней: 4\n");
        break;
    case 4:
        printf("День недели: Четверг\n");
        printf("До воскресенья осталось дней: 3\n");
        break;
    case 5:
        printf("День недели: Пятница\n");
        printf("До воскресенья осталось дней: 2\n");
        break;
    case 6:
        printf("День недели: Суббота\n");
        printf("До воскресенья осталось дней: 1\n");
        break;
    case 7:
        printf("День недели: Воскресенье\n");
        printf("Сегодня уже воскресенье!\n");
        break;
    default:
        printf("Ошибка: введено неверное число! Введите номер от 1 до 7.\n");
        break;
    }

    return 0;
}