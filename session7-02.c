#include <stdio.h>

int main() {
    
    int arr[5];

    
    printf("Nhap 5 so nguyen:\n");
    int i;
    for (i = 0; i < 5; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    printf("\nCac phan tu trong mang la:\n");
    
    for (i = 0; i < 5; i++) {
        printf("Phan tu thu %d: %d\n", i + 1, arr[i]);
    }

    return 0;
}
