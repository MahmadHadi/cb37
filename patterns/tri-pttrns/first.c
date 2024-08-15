// * 
// * * 
// * * *
// * * * *

#include <stdio.h>
void main() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            // printf("* ");
            // printf("%d ", i);
            // printf("%d ", j);
            // printf("%c ", j + 96);
            printf("%c ", i + 96);
        }
        printf("\n");
    }
}

// i = 1, j = 1
// print "* "
// print "\n"
// i++ // i = 2

// i = 2, j = 1, 2 
// print "* "
// j++ // j = 2 
// print "* "
// j++ // j = 2 
// print "\n"
// i++ // i = 3 

// i = 3, j = 1, 2, 3
// print "* "
// j++
// print "* "
// j++
// print "* "
// j++
// print "\n"
// i++ // i = 4 

// i = 4, j = 1, 2, 3, 4 
// print "* "
// j++
// print "* "
// j++
// print "* "
// j++
// print "* "
// j++
// print "\n"

// j = 1, j <= i, j++



// 1 
// 2 2     
// 3 3 3
// 4 4 4 4