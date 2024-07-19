// * +, -, *, / 

#include <stdio.h>
void main() {
    int num1, num2;
    printf("Enter number 1 : ");
    scanf("%d", &num1);
    printf("Enter number 2 : ");
    scanf("%d", &num2);

    fflush(stdin); // * stdin = std input
    char opr;
    printf("Enter operator : ");
    scanf("%c", &opr);

    printf("Hadi %c nayani ", opr);
    
    printf("num1 = %d, num2 = %d, opr = %c ", num1, num2, opr);
}