// * input -> num -> check if num is +ve {0, 1, 191, 493, 321, 3} or -ve {-1, -191, -493, -321, -3}

#include <stdio.h>
void main() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num); 

    if (num < 0) {
        printf("-ve number ");
    }

    if (num >= 0) { // num = 0 -> 0 >= 0 -> true 
        printf("+ve number ");
    } 
    printf("Good bye ");
}