#include <stdio.h>
#include <stdbool.h>
int main() {
    int num = 1201;

    printf("num = %d \n", num);
    printf("sizeof(num) = %d \n", sizeof(num)); // 4 

    char ch = 'a';
    printf("sizeof(ch) = %d \n", sizeof(ch)); // 1
    printf("sizeof(float) = %d \n", sizeof(float)); // 4 
    printf("sizeof(bool) = %d \n", sizeof(bool)); // 1 
    printf("sizeof(101) = %d \n", sizeof(101)); // 4 

    int arr[100];
    int size = sizeof(arr) / sizeof(arr[0]);
    // int size = 20 / 4 -> 5 -> 5 elems inside array ;
    printf("sizeof(arr) = %d \n", sizeof(arr));
    printf("total num of elem in arr = %d \n", size);
    return 0;
}