// Ввести номер месяца и вывести название времени года.
// Данные на входе: Целое число от 1 до 12 - номер месяца.
// Данные на выходе: Время года на английском: winter, spring, summer, autumn
// Пример №1
// Данные на входе: 4
// Данные на выходе: spring
// Пример №2
// Данные на входе: 1
// Данные на выходе: winter

#include <stdio.h>

int main(void) {
    int num;
    printf("Enter a month number:\n");
    scanf("%d", &num);

    if (num < 3 || num == 12) {
        printf("winter\n");
    } else if (num > 2 && num < 6) {
        printf("spring\n");
    } else if (num > 5 && num < 9) {
        printf("summer\n");
    } else if (num > 8 && num < 12) {
        printf("autumn\n");
    } else {
        printf("Invalid month number\n");
    }

    return 0;
}