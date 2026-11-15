#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    char c = 0;

    printf("Введите символ: ");
    scanf("%c", &c); 

    switch (c)
    {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        printf("Это цифра\n");
        break;

    default:
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            printf("Это буква\n");
        }
        else {
            printf("Это другой символ\n");
        }
        break;
    }

    return 0;
}