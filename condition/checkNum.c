// input -> num -> check if num == 101 -> print "true " num != 101 -> print "false "
#include <stdio.h>
void main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 101) {
        printf("true ");
    }

    printf("Good bye ");

    if (num != 101) {
        printf("false ");
    }

    printf("Good bye ");
}