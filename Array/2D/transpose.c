// * C Program to Transpose a Matrix

#include <stdio.h>
int main() {

    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int ans[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            ans[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
        printf("%d ", ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
// 1 2 3 
// 4 5 6 
// 7 8 9 

// 1 4 7 
// 2 5 8 
// 3 6 9
