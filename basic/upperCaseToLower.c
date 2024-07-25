// input -> char -> ch = 'A' -> 'a', ch = 'N' -> 'n', ch = 'n' -> 'n'

#include <stdio.h>
void main() {
    char ch; 
    printf("Enter a character : ");
    scanf("%c", &ch);

    printf("%d \n", ch); 

    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32; // 97 + 32 = 129 
    }
    printf("%c ", ch);
    printf("%d ", ch);
}

// ch = 'A'
// printf("%d ", ch)

// ch = ch + 32 

// ch = 'A' = 65 

// ch = 'A' + 32 = 65 + 32 = 97 

// ch = 'C' = 67
// ch = ch + 32 = 67 + 32 = 99 

 