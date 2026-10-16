#include <stdio.h>

int main() {
    double A = 21.317;
    int a1 = (int)A;
    double a2 = (int) ((A - a1)*1000);
    //int D = (int)(F * 1000);
    double AA = a2 + (a1 / 100.0);

    printf("A = %.3f:\n", A);
    printf("целая часть: %d\n", a1);
    printf("дробная часть: %.0f\n", a2);
    printf("обратное число: %.2f\n", AA);

}