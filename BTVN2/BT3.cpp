#include <stdio.h>
int main(){
	int a;
	int b;
	int c;
	printf("Nhap a:");
	scanf("%d",&a);
	printf("Nhap b:");
	scanf("%d",&b);
	printf("Nhap c:");
	scanf("%d",&c);
		
	if(a+b>c){
		if(a+c>b){
			if(b+c>a){
				printf("La tam giac");
			}else{
				printf("Khong phai tam giac");
			}
		}else{
			printf("Khong phai tam giac");
		}
	}else{
			printf("Khong phai tam giac");
		}
	
	
	
}
	

