// a b a
// b a b
// a b a

#include <stdio.h>
void main() {
    int num = 1;
    // char b = 'b';

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if (num % 2 == 0) {
                printf("%c ", 'b');
            }
            else {
                printf("%c ", 'a');
            }
            num++;
        }
        printf("\n");
    }
}

// a -> variable 
// 'a' -> value 

// num = 1 

// print 'a' -> num % 2 == 0 -> f -> odd -> print 'a'
// num++ // 2 
// print 'b' -> num % 2 == 0 -> t -> even -> print 'b'
// num++ // 3 
// print 'a' 
// num++ // 4 
// print "\n"

// print 'b'
// print 'a'
// print 'b'
// print "\n"

// print 'a'
// print 'b'
// print 'a'
// print "\n"


// printf("hadi ")
// printf("nayani ")

// hadi 
// nayani 
// end = "\n"
