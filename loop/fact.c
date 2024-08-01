// 5! = 5 * 4 * 3 * 2 * 1 
// 3! = 3 * 2 * 1 
// 3! = 1 * 2 * 3 = 2 * 3 = 6

#include <stdio.h>
void main() {
    int num = 3;
    int fact = 1;

    for (int i = 1; i <= num; i++) {
        fact = fact * i;
        // printf("%d %d \n", fact, i);
    }
    printf("fact = %d ", fact);
}