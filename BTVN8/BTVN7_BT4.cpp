//4. Cho mảng  n số nguyên  , hãy tìm giá trị x sao cho đoạn [-x, x] trên trục số nguyên chứa tất cả các giá trị trong mảng
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
    if(arr[0]>=0){
        x=arr[0];
    }else{
        x=-arr[0];
    }
    int temp;
    for (int i = 1; i < n; i++) {
        if(arr[i]>=0){
            temp = arr[i];
        }else{
            temp = -arr[i];
        }
        if (temp > x) {
            x = temp;
        }
    }

    printf("Giá trị nhỏ nhất sao cho đoạn [-x, x] chứa toàn bộ mảng là: %d\n", x);
    printf("Đoạn đó là: [%d, %d]\n", -x, x);

}

