#include <stdio.h>

int bieuThuc(int soNguyen){
    int tich =1;
    while (soNguyen!= 0){
            if (soNguyen%10 != 0){
                tich *=soNguyen%10;
            }
            soNguyen /=10;
        }
    return tich;
}

int main(){
    int soNguyen,tich;
    printf("NHAP VAO SO NGUYEN DUONG : ");
    scanf("%d",&soNguyen);
    while (soNguyen<0){
        printf("NHAP LAI VAO SO NGUYEN DUONG : ");
        scanf("%d",&soNguyen);
    }
    tich = bieuThuc(soNguyen);
    while (tich>9){
        tich =bieuThuc(tich);
    }

    printf("TICH LA : %d",tich);
    return 0;

}