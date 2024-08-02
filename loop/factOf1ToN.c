// * input num = 3 -> print 1!, 2!, 3! 

#include <stdio.h>
void main() {
    int num = 5;
    int fact = 1;
    int count = 1;

    // for (count = 1; count <= num; count++) {
    //     for (int i = 1; i <= count; i++) {
    //         fact *= i; // ! fact = fact * i;
    //     }
    //     printf("%d! = %d \n", count, fact);
    //     fact = 1;
    // }

    for (int i = 1; i <= num; i++) {
        fact *= i; // ! fact = fact * i;
        printf("%d! = %d \n", i, fact);
    }
}
// // 1! 
// for (int i = 1; i <= count; i++) {
//     fact *= i; // ! fact = fact * i;
// }
// printf("%d! = %d \n", count, fact);

// count++; // count = 2 
// // 2! 
// fact = 1;
// for (int i = 1; i <= count; i++) {
//     fact *= i; // ! fact = fact * i;
// }
// printf("%d! = %d \n", count, fact);

// count++; // count = 3 
// // 3! 
// fact = 1;
// for (int i = 1; i <= count; i++) {
//     fact *= i; // ! fact = fact * i;
// }
// printf("%d! = %d \n", count, fact);

// count++; // count = 4 
// count <= num -> 4 <= 3 -> f -> loop end 