//4. Nhập mảng n số nguyên, tìm số lẻ cuối cùng của mảng
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

    int le=-1;
    int f=0;
    for(int i=0;i<size;i++){
        if((player[i]%2)!=0){
            le=player[i];
            f=1;
        }
    }
    if(f){
        printf("So le cuoi cung cua mang %d là %d",size,le);
    }else{
        printf("Khong co so le trong mang");
    }
    
}