//1. Nhập vào mảng n số nguyên và 1 số nguyên x. Hãy tìm giá trị trong mảng số xa giá trị x nhất
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

    int max_khoang_cach, chi_so_xa_nhat = 0; 

    
    if (arr[0] - x >= 0)
        max_khoang_cach = arr[0] - x;
    else
        max_khoang_cach = -(arr[0] - x);

    for (int i = 1; i < n; i++) {
        int temp;
        if (arr[i] - x >= 0)
            temp = arr[i] - x;
        else
            temp = -(arr[i] - x);

        if (temp > max_khoang_cach) {
            max_khoang_cach = temp;
            chi_so_xa_nhat = i;
        }
    }

    printf("Phần tử xa %d nhất là %d\n", chi_so_xa_nhat, arr[chi_so_xa_nhat]);

}
