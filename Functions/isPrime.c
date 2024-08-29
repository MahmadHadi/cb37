// * create a function which returns true if num is prime otherwise returns false 
#include <stdio.h>
#include <stdbool.h> // * to use true, flase and bool datatype 

bool isPrime(int num) { // check if num is prime or not 
    // if (num < 0) {
    //     num = num * -1;
    // } else {
    //     num = num;
    // }
    num = num < 0 ? num * -1 : num;

    for (int i = 2; i <= num - 1; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;   
}

int main() {

    int num = 5;

    printf("isPrime(%d) = %d ", num, isPrime(num));

    
    // isPrime(12) = 0 
    return 0;
}