// num -> input -> check if num is present in 3s table 
// ..., -6, -3, 0, 3, 6, 9, 12, ... 30, 33, 36, ... 99, 102, ... 

#include <stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    // table of 3
    if (num % 3 == 0) {
        printf("3 table yes ");
    } else {
        printf("3 table no ");
    }
    printf("\n");

    // even odd || table of 2 
    if (num % 2 == 0) {
        printf("Even ");
    } else {
        printf("Odd ");
    }

    printf("\n");
    // table of 4 
    if (num % 4 == 0) {
        printf("4 table yes ");
    } else {
        printf("4 table no ");
    }
}