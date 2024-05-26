// Ввести пять чисел и вывестинаибольшее из них 
// Нужно напечатать наибольшее число 
// Данные на входе: Пять целых чисел разделенных пробелом 
// Данные на выходе: Одно целое число
// Данные на входе: 4 15 9 56 4 
// Данные на выходе: 56

#include <stdio.h>

int main(void) {
    int num1, num2, num3, num4, num5, max;
    printf("Enter five numbers separated by a space:\n");
    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);
    
    max = num1;
    if (num2 > max) {
        max = num2;
    }

    if (num3 > max) {
        max = num3;
    }

    if (num4 > max) {
        max = num4;
    }

    if (num5 > max) {
        max = num5;
    }

    printf("%d", max);

    return 0;
}