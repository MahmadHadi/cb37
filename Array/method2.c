#include <stdio.h>
void printArr(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return;    
}
int main() {
    
    int arr[] = {1, 2, 3, 4, -2, 5, -30, 120, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("size arr = %d \n", size);
    printArr(arr, size);
    return 0;
}