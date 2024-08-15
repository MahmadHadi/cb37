// * * * * * 
// *       * 
// *       * 
// *       * 
// * * * * * 

#include <stdio.h>
void main() {
    int row = 5;
    int col = 10;
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            if (i == 1 || j == 1 || i == row || j == col) {
                // printf("***** ");
                printf("* ");
            } else {
                // printf("Hello ");
                printf("  ");
            }
        }
        printf("\n");
    }
}