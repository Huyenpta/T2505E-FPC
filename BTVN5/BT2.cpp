#include <stdio.h>
int main() {
    int a, b;
    printf("Nhap hai so nguyen duong a va b: ");
    scanf("%d",&a);
    scanf("%d",&b);

    int ucln = 1;
    for (int i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            ucln = i;
        }
    }

    int bcnn;
    if (a > b) {
        bcnn = a;
    } else {
        bcnn = b;
    }
    for (;bcnn<=a*b;bcnn++) {
        if (bcnn % a == 0 && bcnn % b == 0) {
            break;
        }
    }

    printf("Uoc chung lon nhat (UCLN) cua %d va %d la: %d\n",a, b, ucln);
    printf("Boi chung nho nhat (BCNN) cua %d va %d la: %d\n",a, b, bcnn);
    
}