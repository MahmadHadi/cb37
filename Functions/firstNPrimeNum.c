// n = 10 
// 1 2 3 5 7 

// n = 20 
// 1 2 3 5 7 11 13 17 19 

#include <stdio.h>
#include <stdbool.h>
// prime -> true 
bool isPrime(int num) { // check if num is prime or not 
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void printPrime(int num) { // taking all numbers b/t 1 to num 
    for (int i = 1; i <= num; i++) {
        // printf("%d \n", i);
        // printf("isPrime(%d) = %d \n", i, isPrime(i));
        if (isPrime(i) == 1) { // i is prime 
            printf("%d ", i);
        }
    }
}

int main() {

    int num = 200;
    printPrime(num);
    return 0;
}