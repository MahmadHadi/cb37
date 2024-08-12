// * * * *
// * * * *
// * * * *
// * * * * 

#include <stdio.h>
void main() {
    // printf("* * * * \n");
    // printf("* * * * \n");
    // printf("* * * * \n");
    // printf("* * * * \n");
    int row, col;

    printf("Enter numbers of row : ");
    scanf("%d", &row);
    printf("Enter numbers of col : ");
    scanf("%d", &col);

    if (row <= 0 || col <= 0) {
        printf("Invalid input ");
    } else {
        for (int i = 1; i <= row; i++) { // row 
            
            // printf("* * * * \n");
            // printf("* ");
            // printf("* ");
            // printf("* ");
            // printf("* ");
            for (int j = 1; j <= col; j++) { // col || cell 
                printf("* ");
            }
            printf("\n");
        }
    }
}


// i = 1;

// i <= 3 -> t 
//     j = 1
//     j <= 3 -> t 
//         print "* "
//         j++ // j = 2 
//     j <= 3 -> t 
//         print "* "
//         j++ // j = 3 
//     j <= 3 -> t 
//         print "* "
//         j++ // j = 4
//     j <= 3 -> f => loop break
//     print "\n"
//     i++ // i = 2
// i <= 3 -> t 
//     j = 1 
//     j <= 3 -> t 
//         print "* "
//         j++ // j = 2
//     j <= 3 -> t 
//         print "* "
//         j++ // j = 3 
//     j <= 3 -> t 
//         print "* "
//         j++ // j = 4
//     j <= 3 -> f => loop break
//     print "\n"
//     i++ // i = 3
// i <= 3 -> t 
//     j = 1 
//     j <= 3 -> t 
//         print "* "
//         j++ // j = 2
//     j <= 3 -> t 
//         print "* "
//         j++ // j = 3 
//     j <= 3 -> t 
//         print "* "
//         j++ // j = 4
//     j <= 3 -> f => loop break
//     print "\n"
//     i++ // i = 4
// i <= 3 -> 4 <= 3 -> f -> loop break;