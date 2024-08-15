// 0 1 1 2 3 5 8 13 ... 
// 01 01 02 
// 03 04 08 
// 13 21 34 

#include <stdio.h>
void main() {
    int first = 0;
    int sec = 1;
    int ans = 1;

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("%.2d ", ans);
            ans = first + sec; 
            first = sec;
            sec = ans;
        }
        printf("\n");
    }
}

// 1 1 2 3 5 8 13 ... 

// first = 0
// sec = 1 
// ans = 1 
// ans = first + sec // 0 + 1 // 1 
// first = sec // first = 1 
// sec = ans // sec = 1 

// ans = first + sec // 1 + 1 // 2 
// first = sec // first = 1
// sec = ans // sec = 2 

// ans = first + sec // 1 + 2 = 3 
// first = sec // first = 2 
// sec = ans // sec = 3 

// ans = first + sec // 2 + 3 = 5 
// first = sec // first = 3 
// sec = ans // sec = 5 

// ... 