// arr = {1, 2, 3, 4, 5}
// evenSum = 2 + 4 = 6 
// oddSum = 1 + 3 + 5 = 9 

// oddSum - evenSum = 9 - 6 = 3

#include <stdio.h>

int calcSub(int arr[], int size) {
    int evenSum = 0, oddSum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) { // ! arr[i] is even number 
            // ! calc even sum 
            evenSum += arr[i];
        } else { // ! arr[i] is odd number 
            // ! calc odd sum 
            oddSum += arr[i];
        }
    }
    return oddSum - evenSum;
}

int main() {

    int arr[] = {1, 2, -3, -1, 4, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("ans = %d ", calcSub(arr, size));

    return 0;
}


arr = {1, 2, 3, 4}

i = 0, es = 0, os = 0 // ! es = evenSum, os = oddSum

i < 4 -> 0 < 4 -> t 
    arr[i] % 2 == 0 -> arr[0] % 2 == 0 -> 1 % 2 == 0 -> f 
    else 
        os += arr[i] -> os = 0 + 1 -> os = 1 
    i++ // i = 1 
i < 4 -> 1 < 4 -> t 
    arr[i] % 2 == 0 -> arr[1] % 2 == 0 -> 2 % 2 == 0 -> t 
        es += arr[i] // es = 0 + 2 -> es = 2 
    i++ // i = 2 
i < 4 -> 2 < 4 -> t 
    arr[i] % 2 == 0 -> 3 % 2 == 0 -> f 
    else 
        os += arr[i] -> os = 1 + 3 -> os = 4 
    i++ // i = 3 
i < 4 -> 3 < 4 -> t 
    arr[i] % 2 == 0 -> 4 % 2 == 0 -> t 
        es += arr[i] -> 2 + 4 -> es = 6 
    i++ // i = 4 
i < 4 -> 4 < 4 -> f -> loop break 

return os - es -> 4 - 6 -> -2 