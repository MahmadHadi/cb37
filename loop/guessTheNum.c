// num -> input 
// key = 10 

// input == key -> input 

// key = 10 
// num = 1
// num = 20
// num = -12 
// num = 32
// num = 10  -> loop break 

#include <stdio.h>
void main() {
    int num;
    int key = 10;

    do {
        printf("Enter a number : ");
        scanf("%d", &num);
    } while (num != key);

    printf("You have entered the value of key ");
}
// key = 10

// num = 23
// num != key -> 23 != 10 -> t 

// num = 4
// num != key -> 4 != 10 -> t 

// num = -43
// num != key -> -43 != 10 -> t 

// num = -10 
// num != key -> -10 != 10 -> t 

// num = 10 
// num != key -> 10 != 10 -> f -> loop end 

// code 