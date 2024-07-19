#include <stdio.h>
void main() {

    char ch;
    printf("Enter a charactor : ");
    scanf("%c", &ch);
    printf("ch = %c \n", ch);

    int num = 101;
    printf("num = %d \n", num);

    printf("Enter a number : ");
    scanf("%d", &num);
    printf("num = %d \n", num);

    float fnum;
    printf("Enter a float number : ");
    scanf("%f", &fnum);
    printf("fnum = %.2f \n", fnum);
}