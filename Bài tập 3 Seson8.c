#include <stdio.h>
int main(){
    int n;
    printf("Ban hay nhap so nguyen so hang va cot trong ma tran tren: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Hay nhap cac phan tu cua ma tran %dx%d:\n", n, n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Phần tử [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nMa tran ma ban vua nhap la:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
