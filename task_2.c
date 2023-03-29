
#include <stdio.h>
#include <math.h>
int main() {
    int a = -3;
    int b = 4;
    int c = 13;
    float y = (a+4*b-pow(c,2))/(2*a*b*c);
    printf("Значення функції y = %f\n", y);
    return 0;
}