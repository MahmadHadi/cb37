#include <stdio.h>
void main() {
    int num = 5;

    for (int i = 10; i >= 1; i--) {
        if (i % 2 != 0) { // odd 
            printf("%d ", i);
        }
        printf("Hello \n");
    }

    for (int i = 9; i >= 1; i -= 2) {
        printf("%d ", i);
        printf("Hello \n");
    }

}

// i = num => i = 5 

// i >= 1 -> 5 >= 1 -> t 
//     print i // 5 
//     i-- // i = 4 
// i >= 1 -> 4 >= 1 -> t 
//     print i // 4 
//     i-- // i = 3 
// i >= 1 -> 3 >= 1 -> t 
//     print i // 3 
//     i-- // i = 2 
// i >= 1 -> 2 >= 1 -> t 
//     print i // 2 
//     i-- // i = 1 
// i >= 1 -> 1 >= 1 -> t 
//     print i // 1 
//     i-- // i = 0 
// i >= 1 -> 0 >= 1 -> f -> loop end 


// num = 10 
// i = num -> i = 9
// i >= 1 

// print i // 9 
// i -= 2 -> i = i - 2 // i = 7 

// i >= 1 -> 7 >= 1 -> t 
//     pritn i // 7 
//     i -= 2 -> i = 5 


