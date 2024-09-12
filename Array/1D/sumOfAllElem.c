// arr = {1, 2, 3, 5, -2, 3}
// ans = 1 + 2 + 3 + 5 - 2 + 3 = 12 
// arr = {1, 2, 3, 4}
// ans = 0
// i = 0
// ans = ans + arr[i] // 0 + 1 -> 1 
// i++ // i = 1

// ans = ans + arr[i] // 1 + 2 -> 3


// ans = ans + arr[2] // 3 + 3 -> 6
// ans = ans + arr[3] // 6 + 4 -> 10 
// ans = 1 + 2 + 3 + 4
#include <stdio.h>
#include "printArray.c" // ! to use printArr function 

int getSum(int arr[], int size) {
    int ans = 0;

    for (int i = 0; i < size; i++) {
        ans = ans + arr[i];
    }
    return ans;
}

int main() {
    // int arr[] = {1, 2, 3, 5, -2, 4};
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, size);

    printf("ans = %d ", getSum(arr, size));
    return 0;
}
