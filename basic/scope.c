#include <stdio.h>

// ! global variable 
int num3 = 3;

int main() {
    printf("num3 = %d \n", num3);
    // * scope 

    // ! local variable 
    int num2 = 12;
    for (int i = 1; i <= 2; i++) {
        printf("num3 inside loop  = %d \n", num3);
        int num = 10;
        // for () {
        //     while () {
        //         if () {
        //             print num 
        //         }
        //     }
        // }
        
        printf("num2 inside loop = %d \n", num2);
        printf("num inside loop = %d \n", num);
    }
     
    // printf("num outside loop = %d \n", num);
    printf("num2 outside loop = %d \n", num2);


    return 0;
}
  