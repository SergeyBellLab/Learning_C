/*
 ============================================================================
 Name        : Задание9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <ctype.h>  // Для tolower()

#define MAX_NAMES 10
#define MAX_NAME_LENGTH 50

// Функция для проверки, является ли буква согласной
int is_consonant(char letter) {

	char lower = tolower(letter);  // Приводим к нижнему регистру

        // Английские согласные
        if (lower >= 'b' && lower <= 'z' &&
            lower != 'a' && lower != 'e' && lower != 'i' &&
            lower != 'o' && lower != 'u' && lower != 'y') {
            return 1;
        }

        // Русские согласные (непонятно как с ними работать, выходит ошибка warning: multi-character character constant [-Wmultichar])
       // if (lower >= 'б' && lower <= 'я' &&
       //     lower != 'а' && lower != 'е' && lower != 'ё' &&
       //     lower != 'и' && lower != 'о' && lower != 'у' &&
       //     lower != 'ы' && lower != 'э' && lower != 'ю' && lower != 'я') {
       //     return 1;
       // }

        return 0;  // Не согласная
}

int main() {
    char names[MAX_NAMES][MAX_NAME_LENGTH]; // Массив для хранения имен

    // Ввод имен
    printf("Введите %d имен:\n", MAX_NAMES);

    for (int i = 0; i < MAX_NAMES; i++) {
    	printf("Имя %d: ", i + 1);
    	        scanf("%49s", names[i]); // Ограничиваем ввод до 49 символов + 1 для '0'

    }

    // Вывод имен, начинающихся с согласной буквы
    printf("\nИмена, начинающиеся с согласной буквы:\n");
    for (int i = 0; i < MAX_NAMES; i++) {
        if (is_consonant(names[i][0]) == 1) {
            printf("%s\n", names[i]);
        }
    }

    return 0;
}
