// * num -> check if num is even or odd 
// num -> even -> return true 
// num -> odd -> return false 
// num = 4 -> return true 
// num = 5 -> return false 

#include <stdio.h>
#include <stdbool.h>

bool isEven3(int number) {
    int ans = number % 2;
    // ans == 0 -> even 
    // ans == 1 -> odd 

    return (ans == 0) ? true : false;
}

bool isEven2(int number) {
    return (number % 2 == 0) ? true : false;
}

bool isEven1(int number) {
    // number % 2  == 0 -> even 
    // else -> odd number 

    if (number % 2 == 0) { // even 
        return true;
    }
    return false;
}

int main() {

    printf("isEven1 = %d \n", isEven1(3));
    printf("isEven2 = %d \n", isEven2(4));
    printf("isEven3 = %d \n", isEven3(4));
    return 0;
}
