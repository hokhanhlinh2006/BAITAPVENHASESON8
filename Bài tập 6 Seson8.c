#include <stdio.h>
int main(){
    int n;
    printf("Ban hay nha vao so pha tu cua ma tran vuong: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Ban hay nhap cac phan tu cua ma tran:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Phan tu la [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    int sum = 0;
    printf("\nCac phan tu: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i][i]);
        sum += arr[i][i];
    }
    printf("\nTong cac phan tu tren duong cheo chinh la: %d\n", sum);
    return 0;
}
