#include <stdio.h>
int main() {
    int a,b;
    printf("Nhap hai so a, b: ");
    scanf("%d",&a);
    scanf("%d",&b);
    int x;
    for (int i=a;i<=b;i++) {
        x=i;
    }
    printf("Cac so nguyen to trong khoang tu %d den %d la: %d", a,b,x);
}