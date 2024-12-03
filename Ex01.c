#include<stdio.h>
int main(){
    int n, m;
    printf("Nhap vao so hang va so cot cho mang: ");
    int arr[n][m];
    printf("Nhap vao gia tri cho mang:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
   
    int number, count = 0;
    printf("Nhap vao gia tri bat ki: ");
    scanf("%d", &number);

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr[i][j] == number){
                printf("phan thu co ton tai trong mang va nam o vi tri arr[%d][%d]", i+1, j+1);
                count = 1;
                break;
            }
        }
    }
    if(count == 0){
        printf("phan tu khong ton tai trong mang");
    }
    return 0;
}