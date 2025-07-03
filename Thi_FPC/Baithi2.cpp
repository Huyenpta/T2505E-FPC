#include <stdio.h>

int main() {
    int n, isPrime = 1;  

    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    if (n < 2) {
        isPrime = 0;  
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;  
            }
        }
    }

    if (isPrime) {
        printf("%d la so nguyen to.\n", n);
    } else {
        printf("%d KHONG phai la so nguyen to.\n", n);
    }
}
