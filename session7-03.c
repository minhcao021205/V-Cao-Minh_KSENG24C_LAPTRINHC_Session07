#include <stdio.h>

int main() {
    
    int arr[5] = {1, 2, 3, 4, 5};
    int foundEven = 0; 

    printf("Cac so chan trong mang: ");
    int i;
    for (i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) { 
            printf("%d ", arr[i]);
            foundEven = 1; 
        }
    }

    if (!foundEven) { 
        printf("\nMang khong chua so chan.");
    }

    return 0;
}
