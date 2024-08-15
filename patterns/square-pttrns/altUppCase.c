// eg 1        eg 2 
//     a B c D  |  a B c 
//     e F g H  |  D e F 
//     i J k L  |  g H i 
//     m N o P  |
    
// num = 1 

// if num % 2 == 0 -> num + 64 -> lower case 
// else num + 96 (%c) -> upper case 
// num++ // num 2 

// if num % 2 == 0 -> t -> num + 64 -> 2 + 64 = 66 
// num++ // num = 3 

// if num % 2 == 0 -> f 
// else -> num + 96 -> 99 -> 'c'
// num++ // num = 4 


#include <stdio.h>
void main() {
    int num = 1;

    for (int i = 1; i <= 4; i++) { // prints row 
        for (int j = 1; j <= 4; j++) { // prints col 
            if (num % 2 == 0) { // even number 
                printf("%c ", num + 64); // Uppercase char 
            } else { // odd number 
                printf("%c ", num + 96); // Lower case char 
            }
            num++; 
        }
        printf("\n");
    }
}
