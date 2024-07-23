#include <stdio.h>
#include <stdbool.h>

void main() {
    // 1 -> !1 = 0

    bool flag = 1 == 1;
    printf("1 == 1 = %d \n", flag);

    flag = !(12 < 10);
    printf("!(12 < 10) = %d \n", flag);

    printf("%d ", !-11); // 0

    printf("\n-------------------\n");

    int num;
    printf("Enter a number : ");
    scanf("%d", &num);


    if (!(num % 2)) {
        printf("even ");
    } else {
        printf("odd ");
    }
}

// num % 2 -> 0 -> num is an even number 
// if (0) -> else code 