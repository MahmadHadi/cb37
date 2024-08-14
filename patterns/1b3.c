// 1 b 3 
// d 5 f 
// 7 h 9 

#include <stdio.h>
void main() {
    int num = 1;

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if (num % 2 == 0) {
                printf("%c ", num + 96);
            } else {
                printf("%d ", num);
            }
            num++; 
        }
        printf("\n");
    }
}