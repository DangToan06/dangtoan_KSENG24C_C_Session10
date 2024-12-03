#include<stdio.h>

int main(){
    int arr[100], n, arr2[100];
    printf("Nhap do dai mang: ");
    scanf("%d", &n);
    printf("Nhap phan tu cho mang:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int searchNumber, count = 0;
    printf("Nhap so can tim kiem: ");
    scanf("%d", &searchNumber);
    for(int i = 0; i < n; i++){
        if(searchNumber == arr[i]){
            arr2[count] = i + 1;
            count++;
        }
    }
    
    if(count == 0){
        printf("phan thu khong ton tai gia tri nao trong mang");
    }else{
        printf("So ban can tim nam ow cac vi tri trong mang la:\n");
        for(int i = 0; i < count; i++){
            printf("%d ", arr2[i]);
        }
    }
    return 0;
}