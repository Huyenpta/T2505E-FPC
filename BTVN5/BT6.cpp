#include <stdio.h>
int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d",&n);
    int x=n;
    int le=1;
    int dv;
    for (;n>0;) {
        dv=n%10;
        if(dv%2==0){
            le=0;
        }
        n=n/10;
    }
    if(le){
        printf("So nguyen duong %d co toan chu so le",x);
    } else{
        printf("So nguyen duong %d khong co toan chu so le",x);
    }
    
}