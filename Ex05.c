#include<stdio.h>

int main(){
    int arr[100], n;
    printf("Nhap do dai mang: ");
    scanf("%d", &n);
    printf("Nhap phan tu cho mang:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int j;
    for(int i = 0; i < n; i++){
        int key = arr[i];
        for(j = i - 1; j >= 0 && key < arr[j]; j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = key;
    }

    printf("Mang sau khi duoc xap xep la:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    int searchNumber;
    printf("\nNhap vao so can tim: ");
    scanf("%d", &searchNumber);

    int start, mid, end;
    start = 0;
    end = n;
    while(start < end){
        mid = (start + end)/2;
        if(searchNumber = arr[mid]){
            printf("So ban can tim nam o vi tri: %d", mid + 1);
            return 0;
        }else if(searchNumber < arr[mid]){
            end = mid - 1;
        }else if(searchNumber > arr[mid]){
            start = mid + 1;
        }
    }

    printf("Khong ton tai gia tri nao trong mang");
    return 0;
}