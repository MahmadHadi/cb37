// row = 3, col = 3
// 1 1 1 
// 2 2 2 
// 3 3 3 
#include <stdio.h>
void main() {
    int row = 3, col = 3;  
    // int count = 1; 
    
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            // printf("%d ", count);
            printf("%d ", i);
        }
        printf("\n");
        // count++;
    }
}

// int count = 1

// print count // 1  
// print count 
// print count 
// print "\n"
// count++ // count = 2 

// print 2 
// print 2 
// print 2 
// print "\n"
// count++ // count = 3

// print 3 
// print 3 
// print 3 
// print "\n"
// count++ // count = 3