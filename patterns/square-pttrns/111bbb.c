// 1 1 1 1 | 1 1 1 
// b b b b | b b b 
// 3 3 3 3 | 3 3 3 
// d d d d | 

#include <stdio.h>
void main() {
    int num = 1;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            if (num % 2 == 0) {
                printf("%c ", num + 96);
            } else {
                printf("%d ", num);
            }
        }
        num++;
        printf("\n");
    }
}