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
    
    for(int i = 0; i < n - 1; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i]= temp;
    }

    printf("Mang sau khi duoc sap xep la:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}