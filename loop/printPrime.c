// 1 2 3 5 7 11 13 17 19 23 29, ... n 

// n = 10 -> 1 - 10 -> all prime nums 
//     1 2 3 5 7

#include <stdio.h>
#include <stdbool.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    bool flag = true;
    
    for (int i = 1; i <= num; i++) { // check all nums b/w 1 to num 
        flag = true;
        for (int j = 2; j <= i - 1; j++) { // to check if i is prime or not 
            if (i % j == 0) {
                flag = false;
                break;
            }
        }
        if (flag == true) {
            printf("%d ", i);
        }
    }
}

// num = 5 
 
// i = 1, i <= 5 

// i <= 5 -> 1 <= 5 -> t 
//     flag = true
//     j = 2 
//     j <= i - 1 -> 2 <= (1 - 1) -> 2 <= 0 -> f 
//     flag == true -> true == true -> t 
//         print i 
//     i++ // i = 2 

// i <= 5 -> 2 <= 5 -> t 
//     flag = true 
//     j = 2 
//     j <= (i - 1) -> 2 <= (2 - 1) -> 2 <= 1 -> f 
//     flag == true -> t 
//         print i 
//     i++ // i = 3 
// i <= 5 -> 3 <= 5 -> t 
//     flag = true 
//     j = 2 
//     j <= i - 1 -> 2 <= 3 - 1 -> 2 <= 2 -> t 
//         i % j == 0 -> 3 % 2 == 0 -> f 
//     j++ // j = 3 
//     j <= i - 2 -> 3 <= 3 - 1 -> f -> loop break;
//     flag == true -> t 
//         print i 
//     i++ // i = 4 
// i <= 5 -> 4 <= 5 -> t 
//     flag = true 
//     j = 2 
//     j <= i - 1 -> 2 <= 3 -> t 
//         i % j == 0 -> 4 % 2 == 0 -> t 
//             flag = false 
//             break;
//     if (flag == true) -> false == true -> 0 == 1 -> f 
//     i++ // i = 5 

// i <= 5 -> 5 <= 5 -> t 
//     flag = true 
//     j = 2 
//     j <= i - 1 -> 2 <= 4 -> t 
//         i % j == 0 -> 5 % 2 == 0 -> f 
//         j++ // j = 3
//     j <= i - 1 -> 3 <= 4 -> t 
//         i % j == 0 -> 5 % 3 == 0 -> f 
//         j++ // j = 4 
//     j <= i - 1 -> 4 <= 4 -> t 
//         i % j == 0 -> 5 % 4 == 0 -> f 
//         j++ // j = 5 
//     j <= i - 1 -> 5 <= 4 -> f -> loop break;

//     flag == true -> true == true -> t 
//         print i 
//     i++ // 6 

// i <= 5 -> 6 <= 5 -> f -> loop break; 
