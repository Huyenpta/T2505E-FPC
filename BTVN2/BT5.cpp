#include <stdio.h>
#include <math.h>
int main(){
int a;
float b;
float c;
float x;
printf("Nhap a:");
scanf("%d",&a);
printf("Nhap b:");
scanf("%f",&b);
printf("Nhap c:");
scanf("%f",&c);
if(a==0){
	if(b==0){
		if(c==0){
				printf("Phuong trinh vo so nghiem");
			}
			else{
				printf("Phuong trinh vo nghiem");
			}
		}else{
			x=-c/b;
			printf("Ket qua la phuong trinh bac nhat: %f",x);
		}
}else{
	float Delta;
	Delta=b*b-4*a*c;
	if(Delta<0){
		printf("Phuong trinh vo nghiem");
	}else{
		if(Delta==0){
			float x;
			x=-b/2*a;
			printf("Ket qua cua phuong trinh la x1=x2: %f", x);
		}else{
			float x1;
			float x2;
			x1=-(b+sqrt(Delta))/2*a;
			x2=-(b-sqrt(Delta))/2*a;
			printf("Ket qua cua x1, x2 là: %f, %f", x1, x2);
		}
	}
		
}

}

