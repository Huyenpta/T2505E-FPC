#include <stdio.h> 

int main() {
    int n;
    printf("Nhap mot so nguyen n: ");
    scanf("%d", &n);

    int r = 0;
    int o = n;

    while (n != 0) {
        int d = n % 10;             
        r = r * 10 + d; 
        n /= 10;        
    }

    printf("So dao nguoc cua %d la: %d", o, r);
}