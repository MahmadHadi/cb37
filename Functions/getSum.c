// fun -> input -> num1, num2 -> return sum of num1 and num2 

#include <stdio.h>
int getSum(int number1, int number2) {
    // int sum = num1 + num2;
    // return sum;

    return number1 + number2;
    // 21 + (-1) -> 21 - 1 -> 20 

    // print sum // 3 
    // print n1 + n2 // 3 
}
int main() {
    int num1 = -1, num2 = 21;
    // int ans = getSum(num1, num2);
    // printf("%d ", ans);

    printf("%d ", getSum(num1, num2));

    return 0;
}