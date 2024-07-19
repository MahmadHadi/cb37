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

    switch (opr) {
        case '+':
            printf("sum = %d ", num1 + num2);
            break;
        case '-':
            printf("sub = %d ", num1 - num2);
            break;
        case '*':
            printf("product = %d ", num1 * num2);
            break;
        case '/':
            printf("division = %d ", num1 / num2);
            break;
        default:
            printf("Invalid input ");
            break;
    }    
}