#include <stdio.h>
int main(){
int x;
printf("Nhap so kWh tieu thu:");
scanf("%d", &x);
if(x<=50){
	printf("Tien dien la 1.678 d/kWh");
}else{
	if(x<=100){
		printf("Tien dien la 1.734 d/kWh");
	}else{
		if(x<=200){
			printf("Tien dien la 2.014 d/kWh");
		}else{
			printf("Tien dien la 2.536 d/kWh");
			}
		}
	}


}
