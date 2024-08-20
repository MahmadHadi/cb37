// * * * *
//   * * *
//     * *
//       *

#include <stdio.h>
void main() {
    int height = 4;

    for (int i = 1; i <= height; i++) { // "\n"
        // for (int j = height - 1; j <= i + 1; j++) {
        for (int j = 1; j <= i - 1; j++) { // # 
            printf("# ");
        }
        for (int k = height; k >= i; k--) { // * 
            printf("* ");
        }
        printf("\n");
    }
}


// i = 1; i <= height; i++
// k = 3; k >= i; k--
// j = 2; j <= i; j++

// height = 3 

// i = 1
// k = height -> k = 3
// j = heihgt - 1 -> 2 

// i <= height -> 1 <= 3 -> t 
//     j <= i -> 2 <= 1 -> f 
//     k >= i -> 3 >= 1 -> t 
//         print "* "
//         k-- // k = 2 
//     k >= i -> 2 >= 1 -> t 
//         print "* "
//         k-- // k = 1
//     k >= i -> 1 >= 1 -> t 
//         print "* "
//         k-- // k = 0
//     k >= i -> 0 >= 1 -> f -> loop break;

//     print "\n"
//     i++ // i = 2 

// i <= height -> 2 <= 3 -> t 
//     j = height - 1 -> 2 
//     j <= i -> 2 <= 2 -> t  
//         print "# "
//         j++ // j = 3 
//     j <= i -> 3 <= 2 -> f -> loop break;

//     k = height -> k = 3 
//     k >= i -> 3 >= 2 -> t 
//         print "* "
//         k-- // k = 2 
//     k >= i -> 2 >= 2 -> t 
//         print "* "
//         k-- // k = 1 
//     k >= i -> 1 >= 2 -> f -> loop break;

//     print "\n"
//     i++ // i = 3

// i <= height -> 3 <= 3 -> t 
//     j = height - 1 -> 3 - 1 -> 2 
//     j <= i -> 2 <= 3 -> t 
//         print "# "
//         j++ // j = 3 
//     j <= i -> 3 <= 3 -> t 
//         print "# "
//         j++ // j = 4 
//     j <= i -> 4 <= 3 -> f -> loop break;

//     k = 3 
//     k >= i -> 3 >= 3 -> t 
//         print "* "
//         k-- // k = 2 
//     k >= i -> 2 >= 3 -> f -> loop break;

//     print "\n"
//     i++ // i = 4 

// i <= heihgt -> 4 <= 3 -> f -> loop break;

// // ! --------------------------
// i = 1
// for (int j = height - 1; j <= i; j++) {
//     printf("# ");
// }

// j = 4 - 1 -> 3 

// j <= i -> 3 <= 1 -> t 
//     print "# "
//     j++ // j = 
// j <= i -> 2 <= 1

