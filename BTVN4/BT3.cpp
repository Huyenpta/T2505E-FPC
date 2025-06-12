#include <stdio.h> 

int main() {
    int n;
    printf("Nhap mot so nguyen n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Chi xet so nguyen duong > 0!");
    }

    int i = 1, sum = 0;
    while (i < n) {
        if (n % i == 0) {
            sum += i;
        }
        i++;
    }

    if (sum == n) {
        printf("%d la so hoan hao.", n);
    } else {
        printf("%d khong phai la so hoan hao.", n);
    }
}