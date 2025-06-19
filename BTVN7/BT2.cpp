//2. Nhập vào  mảng n số nguyên và 1 số nguyên x. Hãy tìm giá trị trong mảng số gần giá trị x nhất
#include <stdio.h>

int main() {
    int n;
    do {
        printf("Nhập số lượng phần tử trong mảng: ");
        scanf("%d", &n);
    } while (n <= 0);

    int arr[n];
    printf("Nhập các phần tử trong mảng:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Nhập số nguyên x: ");
    scanf("%d", &x);

    int min_khoang_cach, chi_so_gan_nhat = 0; 

    
    if (arr[0] - x >= 0)
        min_khoang_cach = arr[0] - x;
    else
        min_khoang_cach = -(arr[0] - x);

    for (int i = 1; i < n; i++) {
        int temp;
        if (arr[i] - x >= 0)
            temp = arr[i] - x;
        else
            temp = -(arr[i] - x);

        if (temp < min_khoang_cach) {
            min_khoang_cach = temp;
            chi_so_gan_nhat = i;
        }
    }

    printf("Phần tử gần %d nhất là %d\n", x, arr[chi_so_gan_nhat]);

}

