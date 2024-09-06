//  product { * } of all elem in an array
// ans = 1 + 2 + 3 +4 = 24
#include <stdio.h>

int getproduct(int arr[], int size) {
    int ans = 1;
    for (int index = 0; index < size; index++) {
        ans = ans * arr[index];
    }
    return ans;
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("ans = %d ", getproduct(arr, size));
    return 0;
}