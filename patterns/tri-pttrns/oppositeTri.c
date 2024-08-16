//       *
//     * *
//   * * *
// * * * *

#include <stdio.h>
void main() {
    int height = 4;

    for (int i = 1; i <= height; i++) { // row 
        for (int k = height - 1; k >= i; k--) { // prints spaces 
            // * invertedTri.c
            // printf("# ");
            printf("  ");
        }
        for (int j = 1; j <= i; j++) { // * 
            // * first.c
            printf("* ");
        }

        printf("\n");
    }

}
// row -> i, * -> j, # -> k 

// i = 1, 
// k = 4 - 1 -> 3; k >= i -> 3 >= 1 -> t 
// print "# "
// k-- // k = 2 

// k >= i -> 2 >= 1 -> t 
// print "# "
// k-- // k = 1 

// k >= i -> 1 >= 1 -> t 
// print "# "
// k-- // k = 0 -> k >= i -> 0 >= 1 -> f -> loop break 

// j = 1, j <= i -> 1 <= 1 -> t 
// print "* "
// j++ // j = 2 // j <= i -> 2 <= 1 -> f -> loop break 
// print "\n"
// i++ // i = 2 

// k = 3, k >= i -> 3 >= 2 -> t 
// print "# "
// k-- // k = 2 

// k >= i -> 2 >= 2 -> t 
// print "# "
// k-- // k = 1  // k >= i -> 1 >= 2 -> f -> loop break 

// j = 1, j <= i -> 1 <= 2 -> t 
// print "* "
// j++ // j = 2 

// j <= i -> 2 <= 2 -> t 
// print "* "
// j++ // j = 3 -> j <= i -> 3 <= 2 -> f -> loop break 
// print "\n"
// i++ // i = 3 

// k = 3, k >= i -> 3 >= 3 -> t 
// print "# "
// k-- // k = 2 // k >= i -> 2 >= 3 -> f -> loop break 

// j = 1, j <= i -> 1 <= 3 -> t 
// print "* "
// j++ // j = 2 

// j <= i -> 2 <= 3 -> t 
// print "* "
// j++ // j = 3 

// j <= i -> 3 <= 3 -> t 
// print "* "
// j++ // j = 4 // j <= i -> 4 <= 3 -> f -> loop break 
// pirnt "\n"
// i++ // i = 4 

// // k = 3 -> k >= i -> 3 >= 4 -> f -> loop break; 

// j = 1, j <= i -> 1 <= 4 -> t 
// print "* "
// j++ // j = 2 

// j <= i -> 2 <= 4 -> t 
// print "* "
// j++ // j= 3 

// j <= i -> 3 <= 4 -> t 
// print "* "
// j++ // j = 4 

// j <= i -> 4 <= 4 -> t 
// print "* "
// j++ // j = 5 
// j <= i -> 5 <= 4 -> f -> loop break; 
// print "\n"
// i++ // i = 5 

// i <= 4 -> 5 <= 4 -> f -> loop break; 