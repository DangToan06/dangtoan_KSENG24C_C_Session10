#include<stdio.h>

void bubbleSort(int arr[], int m){
    for(int i = 0; i < m - 1; i++){
        for(int j = 0; j < m - i - 1; j++){
         if(arr[j] > arr[j+1]){
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
         }
        }
    }
}

int main(){
    int n, m;
    printf("Nhap vao so hang va so cot cho mang: ");
    scanf("%d %d", &n, &m);
    int arr[n][m];
    printf("Nhap vao gia tri cho mang:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(int i = 0; i < n; i++){
        bubbleSort(arr[i],m);
    }

    printf("Mang sau khi duoc sap xep la:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}