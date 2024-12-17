#include <stdio.h>
#include <stdlib.h>

// Khai bao nguyen mau ham 
void menu();
void nhapMang(int **arr, int *n);
void hienMang(int *arr, int n);
void dodaiMang(int n);
void tinhTong(int *arr, int n);
void phantuLonnhat(int *arr, int n);
void endMang();

// Ham Main 
int main() {
    int n = 0;  
    int *arr;  
    int choice;

    do {
        menu();
        printf("\nLua chon cua ban la: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                nhapMang(&arr, &n);
                break;
            case 2:
                hienMang(arr, n);
                break;
            case 3:
                dodaiMang(n);
                break;
            case 4:
                tinhTong(arr, n);
                break;
            case 5:
                phantuLonnhat(arr, n);
                break;
            case 6:
                endMang();
                return 0;
            default:
                printf("\nLua chon cua ban khong hop le. Vui long chon lai!\n");
        }
    } while (choice != 6);
// Giai phong bo nho 
    free(arr);
    
    return 0;
}

// Khai bao logic ham 
void menu(){
    printf("\n                MENU             \n");
    printf("\n 1. Nhap so phan tu va tung phan tu.\n");
    printf("\n 2. Hien thi cac phan tu trong mang.\n");
    printf("\n 3. Tinh do dai cua mang.\n");
    printf("\n 4. Tinh tong cac phan tu trong mang.\n");
    printf("\n 5. Hien thi phan tu lon nhat.\n");
    printf("\n 6. Thoat.\n");
}

void nhapMang(int **arr, int *n){
    printf("\nNhap so phan tu cua mang: ");
    scanf("%d", n);

    *arr = (int *)malloc(*n * sizeof(int));

    printf("Nhap cac phan tu trong mang:\n");
    for (int i = 0; i < *n; i++){
        printf("Phan tu %d = ", i + 1);
        scanf("%d", &(*arr)[i]);
    }
}

void hienMang(int *arr, int n){
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void dodaiMang(int n){
    printf("Do dai cua mang: %d\n", n);
}

void tinhTong(int *arr, int n){
    int tong = 0;
    for (int i = 0; i < n; i++){
        tong += arr[i];
    }
    printf("Tong cac phan tu trong mang: %d\n", tong);
}

void phantuLonnhat(int *arr, int n){
    int max = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    printf("Phan tu lon nhat trong mang: %d\n", max);
}

void endMang(){
    printf("\n   KET THUC CHUONG TRINH.   \n");
}
