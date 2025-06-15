//1. Tính trung bình cộng các số lẻ trong mảng n số
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
    int s=0;
    int c=0;
    for(int i=0;i<size;i++){
        if(player[i]%2==1){
            s=s+player[i];
            c++;
        }
    }
    float tbc=float(s)/c;
    if(c>0){
        printf("Tổng trung bình cộng các số lẻ trong mang %d la %f\n", size,tbc);
    }else{
        printf("Khong co so le nao trong mang %d", size);
    }
    
    
}