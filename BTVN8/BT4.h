//4. Viết hàm tính S = x^y

int TimS(){
    int s=1;
    int x, y;
    printf("Nhap x:");
    scanf("%d", &x);
    printf("Nhap y:");
    scanf("%d",&y);
    if(x>0 && y>0){
        s=pow(x,y);
    }
    return s;
    
}
