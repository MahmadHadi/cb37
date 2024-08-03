// input -> num = 12312 -> len = 5 
// input -> num = 2932912 -> len = 7 
// int # int = int 

#include <stdio.h>
void main() {
    int num = 12809;
    int len = 0;

    while (num != 0) {
        len++;
        num /= 10; // removes last digit 

        // printf("len = %d \n", len);
        // printf("num = %d \n \n", num);
    }
    printf("len = %d \n", len);
    printf("num = %d \n", num);
}

// num = 12312;
// len = 0;

// len++ // len = 1 
// num = num / 10 // 1231

// len++ // len = 2 
// num = num / 10 // 123

// len++ // len = 3 
// num = num / 10 // 12

// len++ // len = 4 
// num = num / 10 // 1

// len++ // len = 5 
// num = num / 10 // 0

// num != 0 

// -------------

// num = 435 
// len = 0

// num != 0 -> 435 != 0 -> t 
//     len++ // len = 1 
//     num /= 10 // 43
// num != 0 -> 43 != 0 -> t 
//     len++ // len = 2 
//     num /= 10 // 4
// num != 0 -> 4 != 0 -> t 
//     len++ // len = 3 
//     num /= 10 // 0

// num != 0 -> 0 != 0 -> f -> loop break;

// print len // 3 