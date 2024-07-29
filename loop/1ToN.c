// input -> n -> 1, 2, 3, ... , n 
// n = 5 -> 1 2 3 4 5 

#include <stdio.h>
void main() {
    int count = 1;
    // printf("%d ", count);
    
    int n; // done 
    printf("Enter a number : "); // done 
    scanf("%d", &n); // done 

    while (count <= n) {
        printf("%d ", count);
        count++; // done 
    }
}

// count = 1; 
// n = 10 

// count <= n -> 1 <= 10 -> t 
//     print count // 1 
// count <= n -> 1 <= 10 -> t 
//     print count // 1 
// count <= n -> 1 <= 10 -> t 
//     print count // 1 
//     .
//     .
//     .


// AIEEE -> JEE main 
// JEE ADV 


// 1 + 2 = 2 
// 2n = 12 -> 12 
// n = 6 
