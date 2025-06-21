//2.Tìm ước chung lớn nhất của 2 số
int TimUCLN(){
    int a, b;
    printf("Nhap a:");
    scanf("%d", &a);
    printf("Nhap b:");
    scanf("%d",&b);
    if(a<0){
        a=-a;
    }
    if(b<0){
        b=-b;
    }
    for(;b!=0;){
       int r=a%b;
       a=b;
       b=r;
    }
    return a;
}



