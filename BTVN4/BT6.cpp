#include <stdio.h>

int main() {
    int n;
    printf("Nhap mot so nguyen n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Khong co so Fibonacci nao nho hon hoac bang %d", n);
    }

    int f0 = 0, f1 = 1, fn = 1;

    while (fn <= n) {
        int temp = fn;
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
        if (fn > n) {
            printf("So Fibonacci tiep can duoi cua %d la: %d", n, temp);
        }
    }

    printf("So Fibonacci tiep can duoi cua %d la: %d", n, f0);
}