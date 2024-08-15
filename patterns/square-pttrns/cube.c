// 001 008 027 
// 064 125 216
// ... 

// 1 * 1 * 1 = 1 
// 2 * 2 * 2 = 8 
// 3 * 3 * 3 = 27 
// ... 

// num = 1 

// pirnt num * num * num // 1 cube 
// num++ // num = 2 

// print num * num * num // 2 cube 
// num++ // num = 3 

// print num * num * num // 3 cube 
// num++ 

// print "\n"

#include <stdio.h>
void main() {
    int num = 1;

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("%.3d ", num * num * num);
            num++;
        }
        printf("\n");
    }
}