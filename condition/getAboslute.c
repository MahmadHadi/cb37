// * aboslute value 

// -ve -> +ve 
// +ve -> +ve 

// -1 -> 1 
// 32 -> 32 
// -43 -> 43

#include <stdio.h>
void main() {
    int num;
    // int ans;
    printf("Enter a number : ");
    scanf("%d", &num);

    // if (num < 0) { // if num is -ve 
    //     // ans = num * -1;
    //     num = num * -1;
    // } else { // if num is +ve 
    //     // ans = num;
    // }
    // // printf("ans = %d ", ans);
    // printf("ans = %d ", num);

    num < 0 ? num = num * -1 : num;
    printf("ans = %d ", num);
}

// if num < 0 -> -ve -> num * -1