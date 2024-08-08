// 5 -> prime num 
// 1, 5 
// 2, 3, 4

// 7 -> prime num 
// 1, 7 

// 1 -> prime num 
// 2 -> prime num 

// 0 is neither prime nor composite.

#include <stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    // num = 4 
    for (int i = 2; i <= num - 1; i++) { // 2, 3
        if (num % i == 0) {
            printf("num is prime number \n");
        } else {
            printf("num is not a prime number ");
        }
    }
}

// num = 11 
// 1, 11 

// num = 4 
// 2, 3
// 2, 

// num = 6 
// 2, 3 

// num -> 2, num - 1 -> table ma aave -> not prime 
// num % (2 -> num - 1) == 0
//     print "prime num not "


// 912 -> 3 -> 912 % 3 == 0
// 4 % 2 = 0 -> even 
// 5 % 2 = 0 -> odd

// ! ------------------
num = 4 
2 -> 4 - 1 => 2 -> 3 
bool flag = true // true = prime, false = not prime  

i = 2
num % i == 0 -> 4 % 2 == 0 -> t 
    flag = false 

i++ // i = 3 
num % i == 0 -> 4 % 3 == 0 -> f 
else 
    print "not prime "


    n = 10 -> 11 
    num = 4 -> 5 
    n = 12 -> 13 


    primeNum = 13 -> 1, 3 => print 13 

    primeNum = 101 -> 0 

    primeNum = 19191 -> 1 ^ 9 ^ 1 ^ 9 ^ 1 == 0 -> polindrome number 
    xor operater -> bitwise opr 

    10 1010