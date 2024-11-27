#include <stdio.h>

int main() {
    
    int arr[] = {10, 20, 30, 40, 50};
    int length = sizeof(arr) / sizeof(arr[0]); 

    
    printf("Cac phan tu trong mang la:\n");
    int i;
    for (i = 0; i < length; i++) {
        printf("Phan tu thu %d: %d\n", i, arr[i]);
    }

    
    printf("Do dai cua mang la: %d\n", length);

    return 0;
}
