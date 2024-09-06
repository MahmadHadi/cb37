// * give the count of even elem in an array 
#include <stdio.h>

int countEven(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    // printf("count = %d ", count);
    return count; 
}

int main() {

    // int arr[] = {1, 2, 3, 4, 5};
    // int arr[] = {1 , 2, 22, 4, 13, 40};
    int arr[] = {11, 29, 8, 16, 23, 14, 5, 1, 30, 18,
                    22, 6, 9, 28, 20, 4, 12, 25, 13, 7,
                    19, 15, 17, 10, 26, 3, 27, 21, 2, 24,
                    8, 5, 14, 16, 30, 23, 9, 20, 19, 1,
                    3, 12, 26, 18, 21, 7, 11, 6, 25, 22,
                    13, 2, 28, 15, 17, 27, 29, 4, 10, 24,
                    9, 16, 30, 8, 23, 11, 20, 5, 18, 7,
                    14, 12, 2, 28, 21, 3, 19, 13, 4, 1,
                    22, 25, 10, 29, 6, 24, 17, 27, 26, 15};
        int size = sizeof(arr) / sizeof(arr[0]); // 20 / 4 -> 5 // ! num of elem in arr 
    
    int ans = countEven(arr, size);
    printf("ans = %d ", ans);
    return 0;
}