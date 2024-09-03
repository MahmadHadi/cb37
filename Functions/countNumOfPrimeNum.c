// count number of prime numbers b/t 1 to num 
//         num = 10 
//             1 -> 10 
//             print 5 // 1 2 3 5 7 
//         num = 15 
//             1 -> 15 
//             print 7 // 1 2 3 5 7 11 13 

// count = 0
// for -> i = 1 -> n 
//     isPrime(i) -> true 
//         count++ 

#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num) { // check if num is prime or not 
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int counter(int num) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (isPrime(i)) {
            count++;
        }
    }
    return count;
}
int main() {
    int num = 10;
    printf("Enter a number : ");
    scanf("%d", &num);

    int count = counter(num);
    printf("count = %d ", count);

    // 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
    return 0;
}


// num = 3 
// 1 2 3 
// count = 0

// i = 1
// i <= num -> 1 <= 3 -> t 
//     isPrime(i) -> isPrime(1) -> t 
//         count++ // count = 1
//     i++ // i = 2 
// i <= num -> 2 <= 3 -> t 
//     isPrime(i) -> isPrime(2) -> t 
//         count++ // count = 2 
//     i++ // i = 3 
// i <= num -> 3 <= 3 -> t 
//     isPrime(i) -> isPrime(3) -> t 
//         count++ // count = 3 
//     i++ // i = 4 
// i <= num -> 4 <= 3 -> f -> loop break 

// print count // 3 
