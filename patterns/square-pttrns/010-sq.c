// 0 1 0 1 | // 0 1 0 
// 0 1 0 1 | // 1 0 1 
// 0 1 0 1 | // 0 1 0 
// 0 1 0 1 |

#include <stdio.h>
void main() {
    int num = 1;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if (num % 2 == 0) {
                printf("%d ", 5);
            } else {
                printf("%d ", 6);
            }
            num++;
        }
        printf("\n");
    }
}