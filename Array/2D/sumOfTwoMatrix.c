// * C Program to find sum and subtraction of two matrices

// m1[2][3] + m2[2][3]

// 1 2 3   3 5 2   4 7 5 
// 4 5 6 + 6 5 4 = 10 10 10
// 7 8 9   9 8 7   16 16 16 

#include <stdio.h>
int main() {

    int m1[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int m2[][3] = {{1, 9, 1}, {-4, 3, 5}, {7, 8, 1}};
    int sum[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = m1[i][j] + m2[i][j]; 
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}