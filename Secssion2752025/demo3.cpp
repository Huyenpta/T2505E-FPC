#include <stdio.h>
int main(){
	//INPUT NUM
	int num;
	printf("Nhap num=");
	scanf("%d",&num);
	
	int r;
	r=num%2; //% : Lay du cua phep chia
	if (r==0){ //== thi may tinh hieu la so sanh =
		//YES
		printf("Number is even");
	}else{
		//NO
		printf("Number is odd");
	}
}
