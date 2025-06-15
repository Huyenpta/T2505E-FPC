//5. Nhập mảng n số nguyên, tìm số dương nhỏ nhất
#include <stdio.h>

int main() {
    int size;
    do {
        printf("Nhap phan tu mang: ");
        scanf("%d", &size);
    } while (size <= 0);
    
    int player[size];
    printf("Nhap phan tu cua mang:");
    for (int i = 0; i < size; i++) {
        scanf("%d", &player[i]);
    }

    int min;
    int f = 0; 

    for (int i = 0; i < size; i++) {
        if (player[i] > 0) {
            if (f == 0) {
                min = player[i]; 
                f = 1;
            } else if (player[i] < min) {
                min = player[i]; 
            }
        }
    }

    if (f) {
        printf("So duong nho nhat trong mang la: %d\n", min);
    } else {
        printf("Khong tim thay so duong nao trong mang.\n");
    }
}
