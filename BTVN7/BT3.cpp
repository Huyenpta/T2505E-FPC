//3. Cho mảng  n số nguyên, hãy tìm đoạn [a, b] trên trục số nguyên sao cho đoạn này chứa tất cả các giá trị trong mảng
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

    int a = arr[0];
    int b = arr[0];
    int found = 0;
    for (int i = 0; i < n; i++) {
        if(arr[i]<a){
            a=arr[i];
        }
        if(arr[i]>b){
            b=arr[i];
        }
        
    }
    printf("Đoạn [%d,%d] là đoạn chứa tất cả các phần tử trong mảng.\n", a, b);

}



