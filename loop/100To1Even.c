// num = 10 -> 10 8 6 4 2 

#include <stdio.h>
void main() {
    int num = 100;
    // for (int i = num; i >= 1; i--) {
    //     // printf("i = %d \n", i);
    //     if (i % 2 == 0) {
    //         printf("%d \n", i);
    //     }
    // }

    int counter = 2;

    while (counter <= num) {
        // printf("\nhello\n");
        printf("%d ", counter); 
        counter += 2; // counter = counter + 2 
    } 
}

// num % 2 == 0 -> even 
//     print num // 10
// num-- // num = 9 

// num % 2 == 0 -> 9 % 2 == 0 -> f 
// num-- // num = 8 

// num % 2 == 0 -> 8 % 2 == 0 -> t 
//     print num // 8 
// num-- // num = 7 

// num % 2 == 0 -> 7 % 2 == 0 -> f 
// num-- // num = 6 

// num % 2 == 0 -> 6 % 2 == 0 -> t 
//     print num // 6 
// num-- // num = 5 

// num % 2 == 0 -> 5 % 2 == 0 -> f 
// num-- // num = 4 

// num % 2 == 0 -> 4 % 2 == 0 -> t 
//     print num // 4 
// num-- // num = 3 

// num % 2 == 0 -> 3 % 2 == 0 -> f 
// num-- // num = 2 

// num % 2 == 0 -> 2 % 2 == 0 -> t 
//     print num // 2 
// num-- // num = 1 

// num % 2 == 0 -> 1 % 2 == 0 -> f 
// num-- // num = 0 

// num >= 1 