// # = {+, -, *, /}

// int # int = int 

// float # int = float

// int # float = float

// float # float = float

// 1 + 2 = 3 
// 1 + 2.5 = 3.5 

// 1 / 2 = 0

#include <stdio.h>
void main() {
    printf("1 + 2 = %d \n", 1 + 2);
    printf("1 - 2 = %d \n", 1 - 2);
    printf("1 * 2 = %d \n", 1 * 2);
    printf("1 / 2 = %.2f \n", 1.0 / 2);
    
    int num1 = 5, num2 = 2;

    // printf("num1 / num2 = %d \n", num1 / num2); // 2 
    // printf("num1 / num2 = %f \n", num1 / num2); // 0.500

    printf("num1 / num2 = %f \n", num1 / num2); // 0.500
    printf("(float)num1 / num2 = %f \n", (float)num1 / num2); 

    // 2 / 5 = 4 / 10 = 0.4
}