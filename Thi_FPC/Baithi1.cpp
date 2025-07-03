#include <stdio.h>
int main(){
	int n;
	int s=0;
	printf("Nhap so nguyen n:");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		s=s+i;
	}
	printf("Tong cac so nguyen la s=%d",s);

}
