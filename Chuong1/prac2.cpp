#include <stdio.h>
void kiemtra(int n) {
    if(n%2!=0) {
        printf("day la so le");
    }
    else {
        printf("day khong phai la so le");
    };
};
int main () {
    int a;
    printf("nhap a: \n");
    scanf("%d, &a");
    kiemtra(a);
    return 0;
};