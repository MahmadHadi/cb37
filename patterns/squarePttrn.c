// * * * *
// * * * *
// * * * *
// * * * * 

#include <stdio.h>
void main() {

    int row = 10, col = 15;

    for (int i = 1; i <= row; i++) { // row 
        for (int j = 1; j <= col; j++) { // col || cell 
            printf("* ");
        }
        printf("\n");
    }
}
