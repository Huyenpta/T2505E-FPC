#include <stdio.h>
#include "hamisprime.h"


int main() {
    int n;
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("%d la so nguyen to.", n);
    } else {
        printf("%d KHONG phai la so nguyen to.", n);
    }

}
