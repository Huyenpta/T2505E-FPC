#include <stdio.h>
int main() {
    int n;
    printf("Nhap mot so nguyen n: ");
    scanf("%d",&n);

    int s = 0;
    for (int i = 0; i <= n; i++) {
        s=s+i;
    }
    printf("Tong cac chu so cua mot so nguyen %d la: %d\n",n,s);
    
}