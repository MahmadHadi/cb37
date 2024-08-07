// num = 123 -> 321 
// num = 9129 -> 9219 

#include <stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int ld, rnum = 0;

    while (num != 0) {
        // num = 123
        ld = num % 10; // get last digit 
        rnum = rnum * 10 + ld; // 0 + 3 = 3 
        num = num / 10; // 12
    }
    printf("rnum = %d ", rnum);
}

// num = 123 -> 321 
// 123 -> 3 * 1 + 2 * 10 + 1 * 100
// 123 -> 123

// num = 321 
// 321 -> 1 * 1 + 2 * 10 + 3 * 100
// 321 -> 1 + 20 + 300
// 321 -> 321 

// 123 => 3 * 100
// 12 => 3 , 2 * 10
// 1 => 3 , 2 * , 1 * 1 

// iit nit 
// //  ----------------
// rnum = 0

// ld = num % 10 = 123 % 10 = 3 
// rnum = ld + rnum * 10 = 3 + 0 * 10 = 3 + 0 = 3  
// num /= 10 = 123 / 10 = 12 

// ld = num % 10 = 2 
// rnum = ld + rnum * 10 = 2 + 3 * 10 = 2 + 30 = 32
// num /= 10 = 12 / 10 = 1 

// ld = num % 10 = 1 % 10 = 1 
// rnum = ld + rnum * 10 = 1 + 32 * 10 = 1 + 320 = 321 
// num /= 10 = 1 / 10 = 0 -> loop break;

// while num != 0 

// // ! -----------------

// num = 4919 -> 9194 
// rnum = 0

// ld = 9 
// rnum = 10 * rnum + ld = 10 * 0 + 9 = 9 
// num = 491

// ld = 1 
// rnum = 10 * rnum + ld = 10 * 9 + 1 = 91 
// num = 49

// ld = 9 
// rnum = 10 * rnum + ld = 10 * 91 + 9 = 910 + 9 = 919
// num = 4 

// ld = 4 
// rnum = 10 * rnum + ld = 10 * 919 + 4 = 9190 + 4 = 9194 
// num = 0 

// while num != 0 -> 0 != 0 -> f -> loop break