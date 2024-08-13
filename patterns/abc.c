// a b c 
// a b c 
// a b c 

#include <stdio.h>
void main() {
    char ch = 'a';

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("%c ", ch);
            ch++;
        }
        ch = 'a';
        printf("\n");
    }
}

// ch = 'a'
// print ch // a 
// ch++ // ch = b 
// print ch // b
// ch++ // ch = c 
// print ch // c 

// print "\n"
// ch = 'a'

// print ch // a 
// ch++ // ch = b 
// print ch // b
// ch++ // ch = c 
// print ch // c 

// print "\n"
// ch = 'a'

// print ch // a 
// ch++ // ch = b 
// print ch // b
// ch++ // ch = c 
// print ch // c 

// print "\n"
// ch = 'a'

// print ch // a 
// ch++ // ch = b 
// print ch // b
// ch++ // ch = c 
// print ch // c 