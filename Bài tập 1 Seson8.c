#include <stdio.h>
int main(){
    int arr[] = {10, 9, 8, 7, 6};
    int length = sizeof(arr) / sizeof(arr[0]);
    for(int i = length - 1; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}
