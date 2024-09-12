// arr = {1, 2, 3, 3, 4, 3, 1}
// key = 1 return 2 
// key = 3 return 3

#include <stdio.h>
int countKey(int arr[], int size, int key) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            count++; 
        }
    }
    return count;
}
int main() {

    int arr[] = {1, 2, 3, 3, 4, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 11;

    int ans = countKey(arr, size, key);
    printf("ans = %d ", ans);

    return 0;
}