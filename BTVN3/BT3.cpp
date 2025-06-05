#include <stdio.h>

int main() {
    int t;
    int T500, T200, T100, T50, T20, T10;

    printf("Nhap so tien can rut (boi so cua 10,000): ");
    scanf("%d", &t);

    if (t % 10000 != 0) {
        printf("So tien phai la boi so cua 10,000!");
    }else{

    T500 = t / 500000; t %= 500000;
    T200 = t / 200000; t %= 200000;
    T100 = t / 100000; t %= 100000;
    T50  = t / 50000;  t %= 50000;
    T20  = t / 20000;  t %= 20000;
    T10  = t / 10000;
    printf("So luong tung loai tien can tra:");
    if (T500 > 0) printf("500000 VND: %d", T500);
    if (T200 > 0) printf("200000 VND: %d", T200);
    if (T100 > 0) printf("100000 VND: %d", T100);
    if (T50  > 0) printf("50000 VND : %d", T50);
    if (T20  > 0) printf("20000 VND : %d", T20);
    if (T10  > 0) printf("10000 VND : %d", T10);
    }
}