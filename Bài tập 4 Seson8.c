#include <stdio.h>
int main(){
    int m, n;
    printf("Moi ban nhap so hang cua mang: ");
    scanf("%d", &m);
    printf("Moi ban nhap so cot cua mang: ");
    scanf("%d", &n);
    int arr[m][n];
    printf("Ban hay nhap vao so phan tu cua mang:\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("Phan tu la [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    int max = arr[0][0];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    printf("\nPhan tu lon nhat o trong mang chinh la: %d\n", max);
    return 0;
}
