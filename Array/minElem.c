// arr = {1, 2, 3, 1, 4, 3}
// return smallest elem 

#include <stdio.h>
#include <limits.h>

int getMin(int arr[], int size) {
    int min = INT_MAX; // ! INT_MAX -> Maximum value stored in var
    // printf("min = %d ", min);

    for (int i = 0; i < size; i++) {
        // printf("min = %d i = %d \n", min, i);
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[] = {1, 2, -3, -1, 4, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int ans = getMin(arr, size);
    printf("ans = %d ", ans);
    return 0;
}