//6. Nhập mảng n số nguyên, tìm số lượng các số dương liên tiếp nhiều nhất
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

    int max_count = 0;    
    int count = 0;       

    for (int i = 0; i < size; i++) {
        if (player[i] > 0) {
            count++;
            if (count > max_count) {
                max_count = count;
            }
        } else {
            count = 0; 
        }
    }

    if (max_count > 0) {
        printf("So luong so duong lien tiep nhieu nhat la: %d\n", max_count);
    } else {
        printf("Khong co chuoi so duong nao trong mang.\n");
    }

}