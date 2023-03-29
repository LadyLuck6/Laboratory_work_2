#include <stdio.h>
#include <math.h>

int main() {
    float x, y, f;//введення змінних
    printf("Введіть перше число: ");
    scanf("%f", &x);
    printf("Введіть друге число: ");
    scanf("%f", &y);
    f=(pow(x,2)+pow(y,2))/(sqrt(x+y));
    printf("Обчислення функції: %.2f\n", f);

    return 0;
}