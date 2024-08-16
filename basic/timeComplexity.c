#include <stdio.h>
void main() {
    // i = 1, n = 4
    // for (1 -> 4 ) {
    //     for (1 -> 4 ) {
    //         for (1 -> 4 ) {

    //         }
    //     }
    // }

    int count = 1;
    for (int i = 1; i <= 4; i++) { 
        for (int j = 1; j <= 5; j++) {
            for (int k = 1; k <= 4; k++) {
                printf("count = %d \n", count);
                count++;
            }
        }
    }
}