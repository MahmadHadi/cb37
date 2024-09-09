// arr = {1, 2, 3, 4, 5, 6, 1}
// key = 3 return 2

#include <stdio.h>
int indexOf(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {1, 3, 2, 2, 4, 2, 5, 6, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 3;

    int ans = indexOf(arr, size, key);
    if (ans == -1) {
        printf("Key not found ");
    } else {
        printf("Key founded at index = %d ", ans);
    }
    return 0;
}