// Ввести три числа и определить, верно ли, что они вводились в порядке возрастания.
// Данные на входе: Три целых числа
// Данные на выходе: Одно слово YES или NO
// Пример
// Данные на входе: 4 5 17
// Данные на выходе: YES

#include <stdio.h>

int main(void) {
    int num1, num2, num3;
    printf("Enter three numbers separated by a space:\n");
    scanf("%d%d%d", &num1, &num2, &num3);

    printf(num1 <= num2 && num2 <= num3 ? "Yes\n" : "No\n");

    return 0;
}