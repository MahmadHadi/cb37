// get last index of key
// 		- {1, 2, 3, 1, 3}, key = 1
#include <stdio.h>

int getIndex(int arr[], int size, int key {
    int lastIndex = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            lastIndex = i;
        }
    }

    return lastIndex;
}

int getIndex2(int arr[], int size, int key) {
    for (int i = size - 1; i >= 0; i--)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 2, 2, 4, 2, 5, 1, 6};
    int key = 11;
    int size = sizeof(arr) / sizeof(arr[0]);

    // int lastIndex = getIndex(arr, size, key);
    int lastIndex = getIndex2(arr, size, key);

    if (lastIndex != -1)
    {
        printf("The last index of %d", lastIndex);
    }
    else
    {
        printf("key is not found %d ", key);
    }

    return 0;
}

// ! getIndex2
// arr = 1, 2, 2, 3
// key = 2

// size = 4
// i = 4 - 1 -> 3

// i >= 0 -> 3 >= 0 -> t
//     arr[i] == key -> arr[3] == key -> 3 == 2 -> f
//     i-- // i = 2
// i >= 0 -> 2 >= 0 -> t
//     arr[i] == key -> arr[2] == key -> 2 == 2 -> t
//         return i // return 2
