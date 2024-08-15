// 02 04 06
// 08 10 12
// 14 16 18 

#include <stdio.h>
void main() {
    // int num = 1; // * for odd numbers  
    int num = 2; // * for even numbers 
    
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("%.2d ", num);
            num += 2;
        }
        printf("\n");
    }
}

// 02 04 06
// 08 10 12
// 14 16 18 

// num = 2 

// print num // 2 
// num += 2 -> num = num + 2 -> 2 + 2 = 4

// print num // 4 
// num += 2 -> num = 6 

// print 6 
// num += 2 -> num = 8 
// print "\n"

// print 8 
// print 10 
// print 12 
// print "\n"

// print 14 
// print 16 
// print 18 
// print "\n"

// if (num % 2 == 0) {
//     printf("%d ", num);
// }
// num++;

// num 1 
// num = 2 
// num = 3 
// ... 
// num = 9 

// 1 2 3 4 5 6 7 8 9 

// 2 4 6 8 

