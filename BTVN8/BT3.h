//3.Tìm bội chung nhỏ nhất của 2 số.
int TimBCNN(){
    int a, b;
    printf("Nhap a:");
    scanf("%d", &a);
    printf("Nhap b:");
    scanf("%d",&b);
    int a0, b0;
    if(a<0){
        a0=-a;
    }else{
        a0=a;
    }

    if(b<0){
        b0=-b;
    }else{
        b0=b;
    }
    int x=a0, y=b0;
    for(;y!=0;){
       int r=x%y;
       x=y;
       y=r;
    }
    int ucln=x;
    int bcnn=(a0*b0)/ucln;
    return bcnn;
}


