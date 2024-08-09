// 5 -> prime num 
// 1, 5 
// 2, 3, 4

// 7 -> prime num 
// 1, 7 

// 1 -> prime num 
// 2 -> prime num 

// 0 is neither prime nor composite.

// * hint 
// check if num is present in table of 2 to (num - 1)
// eg : num = 5 -> check if 5 is present in table of 2 to 4
//     if num is present => num is not a prime number 
//     else num is prime number 

#include <stdio.h>
#include <stdbool.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    bool flag = true; // true -> prime, false -> not a prime 

    // num = 4 
    for (int i = 2; i <= num - 1; i++) { // 2, 3
        if (num % i == 0) {
            flag = false;
            break;
        }
        printf("i = %d \n", i);
    }
    if (num == 0) {
        printf("Zero is neither prime nor composite \n");
    } else if (flag == true) {
        printf("num is prime number \n");
    } else {
        printf("num is not a prime number \n");
    }
}

// num = 5 
// flag = true 

// i = 2 -> 4 

// i <= 4 -> 2 <= 4 -> t 
//     num % i == 0 -> 5 % 2 == 0 -> f 
//     i++ // i = 3 
// i <= 4 -> 3 <= 4 -> t 
//     num % i == 0 -> 5 % 3 == 0 -> f 
//     i++ // i = 4 
// i <= 4 -> 4 <= 4 -> t 
//     num % i == 0 -> 5 % 4 == 0 -> f 
//     i++ // i = 5 
// i <= 4 -> 5 <= 4 -> f -> loop break;

// if (flag == true) 
//     print "Prime num "
// else 
//     print "Not a prime num "

// ! --------------------

// num = 4 

// i = 2 

// i <= 3 -> 2 <= 3 -> t 
//     num % i == 0 -> 4 % 2 == 0 -> t 
//         flag = false;
//     i++ // i = 3 
// i <= 3 -> 3 <= 3 -> t 
//     num % i == 0 -> 4 % 3 == 0 -> false
//     i++ // i = 4 
// i <= 3 -> 4 <= 3 -> f -> loop break;

// flag == true -> print "Prime num "
// flag == false -> print "Not a prime num "


// ! ------------------
// num = 10 
// flag = true // true -> prime, false -> not prime 
// i <= 9

// i = 2 

// i <= 9 -> 2 <= 9 -> t 
//     num % i == 0 -> 10 % 2 == 0 -> t
//         flag = false;
//     i++ // i = 3 
// i <= 9 -> 3 <= 9 -> t 
//     num % i == 0 -> 10 % 3 == 0 -> f 
//     i++ // i = 4 
// i <= 9 -> 4 <= 9 -> t 
//     num % i == 0 -> 10 % 4 == 0 -> f 
//     i++ // i = 5 
// i <= 9 -> 5 <= 9 -> t
//     num % i == 0 -> 10 % 5 == 0 -> t 
//         flag = false;
//     i++ // i = 6 
// i <= 9 -> 6 <= 9 -> t 
//     num % i == 0 -> 10 % 6 == 0 -> f 
//     i++ // i = 7
// i <= 9 -> 7 <= 9 -> t 
//     num % i == 0 -> 10 % 7 == 0 -> f 
//     i++ // i = 8 
// i <= 9 -> 8 <= 9 -> t 
//     num % i == 0 -> 10 % 8 == 0 -> f 
//     i++ // i = 9 
// i <= 9 -> 9 <= 9 -> t 
//     num % i == 0 -> 10 % 9 == 0 -> f 
//     i++ // i = 10 
// i <= 9 -> 10 <= 9 -> f -> loop break;

// flag == true -> print "Prime num "
// else -> print "Not a prime "


// ! --------------------

// num = 10 
// i = 2 
// i <= 9 

// i <= 9 -> 2 <= 9 -> t 
//     num % i == 0 -> 10 % 2 == 0 -> t 
//         flag = false
//         break; // loop break 
    
// if (flag == true) print "prime num "
// else -> print "Not a prime number "