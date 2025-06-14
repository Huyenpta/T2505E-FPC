#include <stdio.h>
int main() {
    int n;
    printf("Nhap mot so nguyen duong n: ");
    scanf("%d",&n);
    int x=n;
    int dv, max=0;
    for (;n>=10; ) {
        dv=n%10;
        if (dv>max){
            max=dv;
        }
        n=n/10;
    }
    printf("Chu so lon nhat cua mot so nguyen %d la: %d\n",x,max);
    
}