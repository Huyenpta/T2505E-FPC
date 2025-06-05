#include <stdio.h>
#include <math.h>
int main(){
	int l;
	printf("Nhap luong:");
	scanf("%d",&l);
	int tncn;
	tncn=l-11000000;
	int t;
	if(tncn<=0){
		printf("Khong phai tinh thue thu nhap ca nhan");
		}else{
			if (tncn<=5000000) {
				t=tncn * 0.05;
				printf("Thue thu nhap ca nhan la %d", t);
			}else{
					if(tncn<=10000000){
						t=(tncn*0.10)-250000;
						printf("Thue thu nhap ca nhan la %d", t);
					}else{
						if(tncn<=18000000){
							t=(tncn*0.15)-750000;
							printf("Thue thu nhap ca nhan la %d", t);
						}else{
							if(tncn<=32000000){
								t=(tncn*0.20)-1650000;
								printf("Thue thu nhap ca nhan la: %d", t);
							}else{
								if(tncn<=52000000){
									t=(tncn*0.25)-3250000;
									printf("Thue thu nhap ca nhan la: %d", t);
								}else{
									if(tncn<=80000000){
										t=(tncn*0.30)-5850000;
										printf("Thue thu nhap ca nhan la: %d", t);
									}else{
										t=(tncn*0.35)-9850000;
										printf("Thue thu nhap ca nhan la: %d                                  ", t);
									}
								}
							}
							
						}
					}	
		
					}
				}
			}
		



