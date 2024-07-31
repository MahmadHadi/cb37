// * 10 9 8 7 ... 1 -> using for loop 
#include <stdio.h>
void main() {
    int num;
    // * take input from user (optional )
    printf("Enter a number : ");
    scanf("%d", &num);

    for (int i = num; i >= 1; i--) {
        printf("%d ", i);
    }
}

// num = 5 -> 5 4 3 2 1 

// i = num = 5, i >= 1, i-- 

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

