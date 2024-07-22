// * num -> even {..., -6, -4, -2, 0, 2, 4, 6, ...} -> num = num + 10, num -> odd {1, 3, 5...} -> num = num + 5 using ternary
#include <stdio.h>
void main() {

    int num; 
    printf("Enter a number: ");
    scanf("%d", &num); // * num = 3

    if (num % 2 == 0) {
        // printf("Even number ");
        num = num + 10;
    } else {
        // printf("Odd number ");
        num = num + 5;
    }
    printf("num  = %d ", num);
}

// num = 3 

// num % 2 == 0 -> 3 % 2 == 0 -> 1 == 0 -> f 
// else 
//     num = num + 5; -> 3 + 5 = 8

// print num -> 8 

// --------------------------
// num = 12 

// num % 2 == 0 
// 12 % 2 == 0
// 0 == 0 - true 
//     num = num + 10
//     num = 12 + 10
//     num = 22

// print num // 22 