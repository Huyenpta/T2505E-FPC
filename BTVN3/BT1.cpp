#include <stdio.h>

int main() {
    int D, M, YYYY;
    int MaxD;

    printf("Nhap ngay (Ngay Thang Nam): ");
    scanf("%d %d %d", &D, &M, &YYYY);

    // Xac dinh so ngay toi da trong thang
    if (M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12) {
        MaxD = 31;
    } else if (M == 4 || M == 6 || M == 9 || M == 11) {
        MaxD = 30;
    } else if (M == 2) {
        if ((YYYY % 4 == 0 && YYYY % 100 != 0) || (YYYY % 400 == 0)) {
            MaxD = 29;
        } else {
            MaxD = 28;
        }
    } else {
        printf("Thang khong hop le!\n");
        }

    // Kiem tra ngay hop le
    if (D < 1 || D > MaxD) {
        printf("Ngay khong hop le!\n");
    }
    // Tang ngay
    D=D+1;
    if (D > MaxD) {
        D = 1;
        M=M+1;
        if (M > 12) {
            M = 1;
            YYYY=YYYY+1;
        }
    }

    printf("Ngay tiep theo la: %02d/%02d/%04d\n", D, M, YYYY);
}