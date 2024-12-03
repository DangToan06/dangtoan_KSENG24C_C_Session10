#include<stdio.h>

int main(){
    int n;
    printf("Nhap do dai mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap gia tri cho mang:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int j;
    for(int i = 0; i < n; i++){
        int key = arr[i];
        for(j = i - 1; j >= 0 && key < arr[j]; j--){
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = key;
    }

    printf("Mang sau khi duoc sap xep la:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}