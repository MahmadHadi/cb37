#include <stdio.h>
void main() {
    char ch = 'a'; // A = 65 
    printf("ch = %c \n", ch);

    printf("ch(%%d) = %d \n", ch);

    printf("'d'(%%d) = %d ", 'd');

    char space = ' ';
    printf("space = %c \n", space);
    printf("space = %d \n", space);

    printf("%d \n", 'a');

    printf("\n------------------\n");
    ch = 'a';
    printf("ch = %c \n", ch);
    ch = ch + 1; // 'a' + 1 = 97 + 1 = 98
    printf("ch = %c \n", ch);
    ch = ch + 1; // 'a' + 1 = 97 + 1 = 98
    printf("ch = %c \n", ch);
    ch = ch + 1; // 'a' + 1 = 97 + 1 = 98
    printf("ch = %c \n", ch);
    ch = ch + 1; // 'a' + 1 = 97 + 1 = 98
    printf("ch = %c \n", ch);

    if (ch == 101) {
        printf("Yes ");
    } else {
        printf("No ");
    }
}