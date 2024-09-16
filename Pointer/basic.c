#include <stdio.h>
void printVal(int *p1) { // ! store given value {address} in pointer p1
    printf("p1 = %d ", p1); // ! print pointer p1 

    printf("value stored at %p is %d \n", p1, *p1); // ! print value stored at *p1
    *p1 = 202; // ! update the value stored at *p1

    return;
}
int main() {
    int num = 101;

    printf("%p ", &num); // ! print address of num {&num} in hexadecimal 
    printf("%d \n", &num); // ! in decimal 

    int *p1 = &num; // ! store address of num in pointer p1
    printVal(p1); // ! passing p1 pointer to printVal function 
    printf("num = %d ", num); // ! print value of num after function call 
    // int* p1 = &num;
    return 0;
}