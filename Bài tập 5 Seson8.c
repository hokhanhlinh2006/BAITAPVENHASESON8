#include <stdio.h>

int main() {
    int x, y;
    printf("Ban hay nhap so hang cua ma tran tren: ");
    scanf("%d", &x);
    printf("Ban hay nhap so cot cua ma tran tren: ");
    scanf("%d", &y);
    int arr[x][y];
    printf("Ban hay nhapp cac phan tu cua ma tran tren:\n");
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            printf("Phan tu la [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < y; i++){
        sum += arr[0][i];
        sum += arr[x-1][i];
    }
    for (int i = 1; i < x - 1; i++){
        sum += arr[i][0];
        sum += arr[i][y-1];
    }
    printf("\nTong cac phan tu co tren phan bien cua ma tran do chinh la: %d\n", sum);
    return 0;
}
