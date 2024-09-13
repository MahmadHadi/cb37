// * sum of row elem 
#include <stdio.h>
int main() {    
 
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int ans = 0;
    for (int i = 0; i < 3; i++) { // ! row 
        for (int j = 0; j < 3; j++) { // ! elem of row 
            ans += arr[i][j];
        }
        printf("row = %d, ans = %d \n", i, ans);
        ans = 0;
    }
    return 0;
}