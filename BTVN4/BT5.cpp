#include <stdio.h>

int main() {
    int n;
    printf("Nhap vi tri n trong day Fibonacci: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Vui long nhap so nguyen khong am.");
    }

    int f0 = 0, f1 = 1, fn = 0;
    int i = 2;

    if (n == 0) {
        fn = f0;
    } else if (n == 1) {
        fn = f1;
    } else {
        while (i <= n) {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
            i++;
        }
    }

    printf("So Fibonacci thu %d la: %d", n, fn);

    return 0;
}