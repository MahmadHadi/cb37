#include <stdio.h>
int main() {
    int row = 3, col = 8;
    // int arr[row][col] = {}
    int arr[3][8] = {
        {1, 2, 3, 4, 5, 6, 7, 8},
        {3, 2, 5, 2, 5, -23, 2, -1},
        {-4, 2, 44, 202, 29, -4, 1, -4}
    };
    // printf("arr[0][5] = %d \n", arr[0][5]);
    // printf("arr[1][5] = %d \n", arr[1][5]);
    // printf("arr[2][7] = %d \n", arr[2][7]);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
// for (int i = 0; i < 8; i++) {
//     printf("%d ", arr[0][i]);
// }
// printf("\n");
// for (int i = 0; i < 8; i++) {
//     printf("%d ", arr[1][i]);
// }
// printf("\n");
// for (int i = 0; i < 8; i++) {
//     printf("%d ", arr[2][i]);
// }
// printf("\n");


// ! --------------
// printf("%d ", arr[0][0]);
// printf("%d ", arr[0][1]);
// printf("%d ", arr[0][2]);
// printf("%d ", arr[0][3]);
// printf("%d ", arr[0][4]);
// printf("%d ", arr[0][5]);
// printf("%d ", arr[0][6]);
// printf("%d ", arr[0][7]);

// printf("\n");
// printf("%d ", arr[1][0]);
// printf("%d ", arr[1][1]);
// printf("%d ", arr[1][2]);
// printf("%d ", arr[1][3]);
// printf("%d ", arr[1][4]);
// printf("%d ", arr[1][5]);
// printf("%d ", arr[1][6]);
// printf("%d ", arr[1][7]);