// create a function which returns factorial of a given number 
//         number = 4 -> return 24
//         num = 1 -> return 1 
//         num = -12 -> return -1
//         num = 0 -> return 1 

#include <stdio.h>

int getFact(int num) {
    if (num < 0) {
        return -1;
    }
    int ans = 1;
    for (int i = 1; i <= num; i++) {
        ans *= i;
    }
    return ans;
}

int main() {

    int num = -12;
    printf("ans = %d \n", getFact(num));
    // ! or 
    int ans = getFact(num);
    printf("ans = %d \n", ans);
}