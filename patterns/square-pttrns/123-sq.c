// 1 2 3
// 1 2 3
// 1 2 3

#include <stdio.h>
void main() {
    // int num = 1;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%d ", j);
            // printf("%d ", num);
            // num++;
        }
        // num = 1;
        printf("\n");
    }
}
