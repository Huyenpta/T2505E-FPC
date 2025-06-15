//3. Nhập vào 1 mảng n số nguyên, sau đó nhập 1 số x. Tìm xem có x trong mảng không.
#include <stdio.h>
int main() {
    int size;
    do{
    printf("Nhap phan tu mang:");
    scanf("%d",&size);
    }while(size<=0);
    
    int player[size];
    printf("Nhap phan tu trong mang:");
    for(int i=0;i<size;i++){
        scanf("%d",&player[i]);
    }
    int x;
    printf("Nhap x:");
    scanf("%d",&x);
    for(int i=0;i<size;i++){
        if(x==player[i]){
            printf("%d co trong mang",x);
            break;
        }else{
            printf("%d khong co trong mang",x);
            break;
        }
    }
    
}