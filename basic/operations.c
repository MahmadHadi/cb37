#include <stdio.h>
void main() {
    int num = 10;
    printf("num = %d \n", num);

    num = num + 20; // 10 + 20 = 30
    printf("num = %d \n", num); // num = 30

    num = num * num; // 30 * 30 = 900 
    printf("num = %d \n", num);

    num = num - 200; // 900 - 200 = 700 
    printf("num = %d \n", num); // 700

    num = num * -1; // 700 * -1 => -700
    printf("num = %d \n", num); // 700

    int temp = 1;
    printf("temp = %d \n", temp);
    
    temp++; // * temp = temp + 1 
    printf("temp = %d \n", temp);
    
    temp++; // * temp = temp + 1 
    printf("temp = %d \n", temp);

    temp--; // * temp -= 1 // temp = temp - 1
    printf("temp = %d \n", temp);

    temp++; // * temp += 1 // temp = temp + 1 
    printf("temp = %d \n", temp);

    temp--; // * temp -= 1 // temp = temp - 1
    printf("temp = %d \n", temp);
        
}   
// temp ** 2; // * temp = temp * temp;
// temp ** 4; // * temp = temp * temp * temp * temp