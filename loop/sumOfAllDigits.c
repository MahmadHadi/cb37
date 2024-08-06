// * num / 10 -> remove last digit 
// * num % 10 -> get last digit 

// input - num = 123 -> sum = 1 + 2 + 3 = 6 = 3 + 2 + 1 
// num = 4098 -> sum = 4 + 0 + 9 + 8 = 21  

#include <stdio.h>
void main() {
    int num = 123;
    int sum = 0;
    // HW 
}

// num = 123 
// sum = 0 
// ld // last digit 

// ld = num % 10 // ld = 123 % 10 => ld = 3 
// sum = sum + ld // 0 + 3 = 3  
// num = num / 10 // 123 / 10 = 12 

// ld = num % 10 // ld = 12 % 10 = 2
// sum = sum + ld // 3 + 2 = 5 
// num = num / 10 // 12 / 10 = 1 

// ld = num % 10 // ld = 1 % 10 = 1 
// sum = sum + ld // 5 + 1 = 6 
// num = num / 10 // 1 / 10 = 0

// num != 0 

// print sum // 6 