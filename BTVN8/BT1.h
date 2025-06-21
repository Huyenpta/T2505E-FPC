//1. Tỉnh tổng các chữ số của 1 số nguyên n
int tinhtong(){
    int n;
    printf("Nhập số nguyên n:");
    scanf("%d",&n);
    if(n<0){
        n=-n;
    }
    int s=0;
    for (;n>0; n=n/10){
        s=s+(n%10);
    }
    
    return s;
}



