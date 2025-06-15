//7. Nhập mảng n số nguyên, tìm xem chuỗi số dương mà có tổng lớn nhất là bao nhiêu
#include <stdio.h>

int main() {
    int size;
    do {
        printf("Nhap so phan tu cua mang: ");
        scanf("%d", &size);
    } while (size <= 0);

    int player[size];
    printf("Nhap phan tu trong mang:");
    for (int i = 0; i < size; i++) {
        scanf("%d", &player[i]);
    }
    
    int max_s = 0;    
    int s = 0;       

    for (int i = 0; i < size; i++) {
        if (player[i] > 0) {
            s=s+player[i];
            if (s > max_s) {
                max_s = s;
            }
        } else {
            s = 0; 
        }
    }

    if (max_s > 0) {
        printf("Chuoi so duong co tong lon nhat la: %d\n", max_s);
    } else {
        printf("Khong co chuoi so duong nao trong mang.\n");
    }

}