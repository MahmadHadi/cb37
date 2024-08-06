// product -> num = 123 -> ans = 1 * 2 * 3 
// num = 922 -> ans = 9 * 2 * 2 = 36 

#include <stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int ans = 1;

    while (num != 0) {
        // step 1 : calculate ld 
        int ld = num % 10; // get last digit 

        // step 2 : calculate ans 
        ans *= ld; // ans = ans * ld;

        // step 3 : remove last digit 
        num /= 10; // remove last digit 
    }

    printf("ans = %d ", ans);
}

// num = 123 -> ans = 1 * 2 * 3 = 6 = 3 * 2 * 1 

// num = 4781 
// ans = 1

// num != 0 -> 4781 != 0 -> t 
//     // step 1 : calculate ld 
//     ld = num % 10 -> 4781 % 10 = 1

//     // step 2 : calculate ans 
//     ans = ans * ld // 1 * 1 = 1 

//     // step 3 : remove last digit 
//     num = num / 10 = 478