#include <stdio.h>
int dz();
int main () {
dz();
}
int dz() {
    double A = 21.317;
    int a1 = (int)A;//целая
    double a2 = (int) ((A - a1)*1000);//дробная
 
    double AA = a2 + (a1 / 100.0);//обратное

    printf("A = %.3f:\n", A);
    printf("целая часть: %d\n", a1);
    printf("дробная часть: %.0f\n", a2);
    printf("обратное число: %.2f\n", AA);

}
