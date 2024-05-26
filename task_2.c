// Ввести пять чисел и вывести наименьшее из них
// Нужно напечатать наименьшеечисло
// Данные на входе: Пять целых чисел разделенных пробелом
// Данные на выходе: Одно целое число
// Данные на входе: 4 15 9 56 4 
// Данные на выходе: 4

#include <stdio.h>

int main(void) {
    int num1, num2, num3, num4, num5, min;
    printf("Enter five numbers separated by a space:\n");
    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);
    
 min = num1;
    if (num2 < min) {
     min = num2;
    }

    if (num3 < min) {
     min = num3;
    }

    if (num4 < min) {
     min = num4;
    }

    if (num5 < min) {
     min = num5;
    }

    printf("%d", min);

    return 0;
}