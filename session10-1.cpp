#include <stdio.h>
int main() {
    // Khai bao va gan gia tri cho mang
    int arr[] = {3, 5, 7, 9, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
	 // Tinh so luong phan tu cua mang
    int x, found = 0;

    // Yeu cau nguoi dung nhap phan tu
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);

    // Tim kiem phan tu trong mang
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Phan tu %d ton tai o vi tri %d\n", x, i);
            found = 1; // Danh dau da tim thay
            break;     // Thoat khoi vong lap sau khi tim thay
        }
    }
    // Neu khong tim thay
    if (!found) {
        printf("Phan tu %d khong ton tai trong mang\n", x);
    }
    return 0;
}

