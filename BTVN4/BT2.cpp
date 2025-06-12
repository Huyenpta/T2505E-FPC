#include <stdio.h>

int main() {
    int n;
    printf("Nhap mot so nguyen n: ");
    scanf("%d", &n);

    int x = n - 1;

    while (x > 0) {
        if (x % 2 == 0 && x % 3 == 0) {
            printf("So lon nhat nho hon %d chia het cho 2 va 3 la: %d", n, x);
            }
        x--;
    }

    if (x <= 0) {
    }

}