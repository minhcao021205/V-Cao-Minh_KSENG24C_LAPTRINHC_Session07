#include <stdio.h>

int main() {
    int n;

    
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("So phan tu phai lon hon 0.\n");
        return 1;
    }

    int arr[n]; 

    
    printf("Nhap c�c phan tu cua mang:\n");
    int i;
    for (i = 0; i < n; i++) {
        printf("Ph?n t? th? %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    printf("C�c phan tu cua mang l�: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
