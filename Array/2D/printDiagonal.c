// * C Program to Read a Matrix and Print Diagonals

#include <stdio.h>
int main() {    
 
    int arr[3][3];

    // ! taking input 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter elem %d, %d : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // printf("%d ", arr[i][j]);

            if (i == j) {
                printf("%d ", arr[i][j]);
            } else {
                printf("# ");
            }
        }
        printf("\n");
    }

    return 0;
}