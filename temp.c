#include <stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int ld, rnum = 0;
    int temp = num;

    while (num != 0) {
        // num = 123
        ld = num % 10; // get last digit 
        rnum = rnum * 10 + ld; // 0 + 3 = 3 
        num = num / 10; // 12
    }  
    // printf("%d \n", num);
    printf("%d == %d \n", temp, rnum);
    if (temp == rnum) {
        printf("%d is a palindrome.\n", rnum);
    } else {
        printf("%d is not a palindrome.\n",rnum );
    }
}

// num == rnum 
// print num // 0 
