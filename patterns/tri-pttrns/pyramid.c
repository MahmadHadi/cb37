//     * 
//    * * 
//   * * *
//  * * * *

//        * 
//      * * 
//    * * * 
//  * * * *
#include <stdio.h>
pop -> class X 
c++ , java -> oop 
void main() {
    int height = 4;

    for (int i = 1; i <= height; i++) {
        for (int j = height - 1; j >= i; j--) {
            printf(" ");
            // printf("      ");
            // printf(" ");
            // printf(" ");
            // printf(" ");
            // printf(" ");
            // printf(" ");
            // printf(" ");
            // for (int z = 1; z <= 6; z++) {
            //     printf(" ");
            // }
        } 
    
        for (int k = 1; k <= i; k++) {
            printf("* ");
            // printf("HelloHello ");
        }
        printf("\n");
    }

//           hello 
//        hello hello 
//      hello hello hello 
//   hello hello hello hello 
}
// h = 3 

// i = 1
// i <= h -> 1 <= 3 -> t 
//     j = h - 1 -> j = 3 - 1 -> j = 2 
//     j >= i -> 2 >= 1 -> t 
//         print "#"
//         j-- // j = 1 
//     j >= i -> 1 >= 1 -> t 
//         print "#"
//         j-- // j = 0 
//     j >= i -> 0 >= 1 -> f -> loop break

//     k = 1 
//     k <= i -> 1 <= 1 -> t 
//         print "* "
//         k++ // k = 2 
//     k <= i -> 2 <= 1 -> f -> loop break;

//     print "\n"
//     i++ // i = 2 

// i <= h -> 2 <= 3 -> t 
//     j = h - 1 -> j = 3 - 1 -> 2 
//     j >= i -> 2 >= 2 -> t   
//         print "#"
//         j-- // j = 1
//     j >= i -> 1 >= 2 -> f -> loop break;

//     k = 1 
//     k <= i -> 1 <= 2 -> t 
//         print "* "
//         k++ // k = 2 
//     k <= i -> 2 <= 2 -> t 
//         print "* "
//         k++ // k = 3 
//     k <= i -> 3 <= 2 -> f -> loop break;

//     print "\n"
//     i++ // i = 3 

// i <= h -> 3 <= 3 -> t 
//     j = h - 1 -> j = 2 
//     j >= i -> 2 >= 3 -> f -> loop break;

//     k = 1 
//     k <= i -> 1 <= 3 -> t 
//         print "* "
//         k++ // k = 2 
//     k <= i -> 2 <= 3 -> t 
//         print "* "
//         k++ // k = 3 
//     k <= i -> 3 <= 3 -> t 
//         print "* "
//         k++ // k = 4 
//     k <= i -> 4 <= 3 -> f -> loop break 

//     print "\n"
//     i++ // i = 4 

// i <= h -> 4 <= 3 -> f -> loop break; 