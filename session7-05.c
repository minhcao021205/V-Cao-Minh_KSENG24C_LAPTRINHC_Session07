#include <stdio.h>

int main() {
    
    int arr[5] = {12, 3, 45, 7, 20};
    int max = arr[0]; 
    int min = arr[0]; 

    int i;
    for (i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    
    printf("Phan tu lon nhat trong mang: %d\n", max);
    printf("Phan tu nho nhat trong mang: %d\n", min);

    return 0;
}


