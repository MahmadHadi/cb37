// * * * * 
// * * * 
// * * 
// * 

#include <stdio.h>
void main() {
    int height = 15;
    printf("Enter height : ");
    scanf("%d", &height);

    if (height <= 0) {
        printf("Invalid input ");
    } else {
        for (int i = 1; i <= height; i++) {
            for (int j = height; j >= i; j--) {
                printf("* ");

                // printf("%d ", i);
                // printf("%d ", j);
                // printf("%c ", j + 96);
                // printf("%c ", i + 96);

                // if (j % 2 == 0) {
                //     printf("0 ");
                // } else {
                //     printf("1 ");
                // }

                // if (i % 2 == 0) {
                //     printf("0 ");
                // } else {
                //     printf("1 ");
                // }
            }
            printf("\n");
        }
    }

}

// i = 1, j = 1 

// i = 1, j = 4, j >= i -> 4 >= 1 -> t 
// print "* "
// j-- // j = 3 

// i = 1, j = 3, j >= i -> 3 >= 1 -> t 
// print "* "
// j-- // j = 2 

// i = 1, j = 2, j >= i -> 2 >= 1 -> t 
// print "* "
// j-- // j = 1 

// i = 1, j = 1, j >= i -> 1 >= 1 -> t 
// print "* "
// j-- // j = 0

// i = 1, j = 0, j >= i -> 0 >= 1 -> f -> loop end  
// print "\n"
// i++ // i = 2 

// i = 2, j = 4, j >= i -> 4 >= 2 -> t 
// print "* "
// j-- // j = 3 

// i = 2, j = 3, j >= i -> 3 >= 2 -> t 
// print "* "
// j-- // j = 2 

// i = 2, j = 2, j >= i -> 2 >= 2 -> t 
// print "* "
// j-- // j = 1 

// i = 2, j = 1, j >= i -> 1 >= 2 -> f -> loop break;
// print "\n"
// i++ // i = 3 

// print "* "
// print "* "
// print "\n"

// print "* "
// print "\n"