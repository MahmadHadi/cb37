#include <stdio.h>
#include<stdbool.h> // to use bool {datatype}, {true, false} {value}

void main() {
    // boolean -> true {1}, false {0} 

    bool flag = false; // 0 
    
    printf("flag = %d \n", flag);

    bool flag2 = true; // 1 
    printf("Your grade status = %d \n", flag2);

    if (false) { // true 
        printf("true \n");
    } else {
        printf("false asdf asdf \n");
    }

    // 1 == 1 => true 
    // 1 + 2 => 3  
    // 1 + 2 == 3 -> true 
    // 3 == 3 -> true 

    int num = 1 + 2; // 3 
    bool check = 43 == 23;
    printf("check = %d \n", check);
}