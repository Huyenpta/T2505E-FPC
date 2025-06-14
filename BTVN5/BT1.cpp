#include <stdio.h> 

int main() {
    int n;
    printf("Nhap mot so nguyen n: ");
    scanf("%d", &n);
    
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            continue;
        }
    }

    printf("Tong cac uoc cua %d la: %d\n", n, sum);
   
}