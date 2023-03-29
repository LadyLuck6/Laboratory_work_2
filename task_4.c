#include <stdio.h>
#include <math.h>

int main() {
    float a, b;//введення змінних
    printf("Введіть перше число: ");
    scanf("%f", &a);
    printf("Введіть друге число: ");
    scanf("%f", &b);

    printf("Добуток двох чисел: %.2f\n", a*b);
    printf("Подвоєна сума двох чисел: %.2f\n", (a+b)*2);
    printf("Середнє арифметичне двох чисел: %.2f\n", (a+b)/2);

    return 0;
}
