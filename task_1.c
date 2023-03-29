#include <stdio.h>
#include <math.h>

int main() {
    float a, b;//введення змінних
    printf("Введіть перше число: ");
    scanf("%f", &a);
    printf("Введіть друге число: ");
    scanf("%f", &b);

    printf("Середнє арифметичне: %.2f\n", (a+b)/2);
    printf("Різниця 1-го і 2-го: %.2f\n", a-b);
    printf("Добуток 2-го і квадрату 1-го числа: %.2f\n", b*a*a);

    return 0;
}