#include <stdio.h>

int main(void) {
    int num1, num2, num3;
    printf("Enter three numbers separated by a space:\n");
    scanf("%d%d%d", &num1, &num2, &num3);

    printf(num1 <= num2 && num2 <= num3 ? "Yes\n" : "No\n");

    return 0;
}