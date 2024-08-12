// num = 5 
// print table of num 

#include <stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);


    // method 2 
    // int ans = 0;
    // for (int i = 1; i <= 10; i++) { // loop will run 10 times 
    //     ans += num;
    //     printf("%d * %d = %d \n", num, i, ans);
    // }

    // method 1 
    int ans = 1;
    for (int i = 1; i <= 10; i++) { // loop will run 10 times 
        int ans = i * num;
        printf("%d * %d = %d \n", num, i, ans);
    }
    // num = 3 
    // 3 * 1 = 3 
    // 3 * 2 = 6 
    // 3 * 3 = 9 
    // 3 * 4 = 12 
}

// num = 5 
// 5 10 15 20 25 30 ... 50 -> 10 times 
// method 1 -> num * (1 to 10)
// method 1 -> 5 * (1 to 10)

// method 2 -> add num in each loop 
// method 2 -> add 5 in each loop 

// method 2 
// num = 4 
// ans = 0 
// i = 1 

// i <= 10 -> 1 <= 10 -> t 
//     ans += num -> ans = ans + num -> ans = 0 + 4 = 4 
//     i++ // i = 2 
// i <= 10 -> 2 <= 10 -> t 
//     ans += num -> 4 + 4 = 8 
//     i++ // i = 3 
// i <= 10 -> 3 <= 10 -> t 
//     ans += num -> 8 + 4 = 12 
//     i++ // i = 4 
// i <= 10 -> 4 <= 10 -> t 
//     ans += num -> 12 + 4 = 18 
//     i++ // i = 5 
// i <= 10 -> 5 <= 10 -> t 
//     ans += num -> 18 + 4 = 20 
//     i++ // i = 6 
// i <= 10 -> 6 <= 10 -> t 
//     ans += num -> 20 + 4 = 24 
//     i++ // i = 7 
// i <= 10 -> 7 <= 10 -> t 
//     ans += num -> 24 + 4 = 28 
//     i++ // i = 8 
// i <= 10 -> 8 <= 10 -> t 
//     ans += num -> 28 + 4 = 32 
//     i++ // i =9 
// i <= 10 -> 9 <= 10 -> t 
//     ans += num -> 32 + 4 = 36 
//     i++ // i = 10 
// i <= 10 -> 10 <= 10 -> t 
//     ans += num -> 36 + 4 = 40 
//     i++ // i = 11 
// i <= 10 -> 11 <= 10 -> f -> loop break;