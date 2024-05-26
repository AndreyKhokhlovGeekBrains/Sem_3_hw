// Операционная система: Windows 11
// IDE: VSCode

#include <stdio.h>

int main(void) {
    int a = 5, b =7;
    float res;
    res = (a += 5) * (b -= 3); // a = 10, b = 4, res = 40
    printf("%d, %d, %.2f\n", a, b, res);

    res = --b / (a++ - 3.0); // a = 11, b = 3, res = 3 / 7 = 0.43
    printf("%d, %d, %.2f\n", a, b, res);

    res = (a -= 2.0) || 47 / (b - 7.0); // a = 9, b = 3, res = 1 (True)
    printf("%d, %d, %.2f\n", a, b, res);

    res = (a *= b) + (b *= a); // a = 27, b = 81, res = 27 + 81 = 108
    printf("%d, %d, %.2f\n", a, b, res);

    return 0;
}