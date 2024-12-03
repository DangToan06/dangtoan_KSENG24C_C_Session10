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

    int temp;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("Mang sau khi duoc sap xep la:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}