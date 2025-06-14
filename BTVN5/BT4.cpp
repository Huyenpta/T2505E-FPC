#include <stdio.h>
int main() {
    int n;
    printf("Nhap mot so nguyen duong n: ");
    scanf("%d",&n);
    int x=n;
    for (;n>=10; ) {
        n=n/10;
    }
    printf("Chu so dau tien cua %d la: %d\n",x,n);
    
}