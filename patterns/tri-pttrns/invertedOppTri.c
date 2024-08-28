// * * * *
//   * * *
//     * *
//       *

#include <stdio.h>
void main() {
    int height = 4;
    int count = 2;

    for (int i = 1; i <= height; i++) { // "\n"
        // for (int j = height - 1; j <= i + 1; j++) {
        for (int j = 1; j <= i - 1; j++) { // # 
            // (int j = 10)
            printf("j = %d \n", j);

            printf("   ");
        }
        for (int j = height; j >= i; j--) { // * 
            // printf("* ");
            printf("%.2d ", count);
            count += 2;
        }
        printf("\n");
    }
}


// i = 1; i <= height; i++
// j = 3; j >= i; j--
// j = 2; j <= i; j++

// height = 3 

// i = 1
// j = height -> j = 3
// j = heihgt - 1 -> 2 

// i <= height -> 1 <= 3 -> t 
//     j <= i -> 2 <= 1 -> f 
//     j >= i -> 3 >= 1 -> t 
//         print "* "
//         j-- // j = 2 
//     j >= i -> 2 >= 1 -> t 
//         print "* "
//         j-- // j = 1
//     j >= i -> 1 >= 1 -> t 
//         print "* "
//         j-- // j = 0
//     j >= i -> 0 >= 1 -> f -> loop break;

//     print "\n"
//     i++ // i = 2 

// i <= height -> 2 <= 3 -> t 
//     j = height - 1 -> 2 
//     j <= i -> 2 <= 2 -> t  
//         print "# "
//         j++ // j = 3 
//     j <= i -> 3 <= 2 -> f -> loop break;

//     j = height -> j = 3 
//     j >= i -> 3 >= 2 -> t 
//         print "* "
//         j-- // j = 2 
//     j >= i -> 2 >= 2 -> t 
//         print "* "
//         j-- // j = 1 
//     j >= i -> 1 >= 2 -> f -> loop break;

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

//     j = 3 
//     j >= i -> 3 >= 3 -> t 
//         print "* "
//         j-- // j = 2 
//     j >= i -> 2 >= 3 -> f -> loop break;

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

