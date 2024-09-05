#include <stdio.h>
int main() {

    int arr[5];
    int size = sizeof(arr) / sizeof(arr[0]); // ! size -> total number of elems in arr 
    arr[0] = 10;
    arr[1] = 11;
    arr[2] = 13;
    arr[3] = 14;
    arr[4] = 15;

    // * java -> index out of bound -> total elem = 10 -> 0 -> 9 -> arr[130] -> error -> index out of bound
    // int i = 0;

    // printf("arr[0] = %d \n", arr[i]);

    // i++; // i = 1 
    // printf("arr[0] = %d \n", arr[i]); // arr[1]

    // i++; // i = 2 
    // printf("arr[0] = %d \n", arr[i]); // arr[2]
    // printf("arr[0] = %d \n", arr[3]);
    // printf("arr[0] = %d \n", arr[4]);

    for (int i = 0; i < size; i++) { // * size = 5 -> i = 4 -> i = 5 -> 5 < 5 -> f -> loop break;
        printf("arr[%d] = %d \n", i, arr[i]);
    }
    return 0;
}