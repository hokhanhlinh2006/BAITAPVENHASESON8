#include <stdio.h>
int main(){
    int n, i, x;
    int number = 0;
    printf("Moi ban nhap so luong phan tu trong mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Hay nhap cac phan tu co trong mang:\n");
    for (i = 0; i < n; i++){
        printf("Phan tu la %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Hay nhap so phan tu ma ban can tim: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++){
        if (arr[i] == x) {
            printf("Vi tri phan tu o trong mang do la %d.\n", i + 1);
            number= 1;
            break;
        }
    }
    if (!number) {
        printf("Phan tu nay khong ton tai trong mang.\n");
    }
    return 0;
}
