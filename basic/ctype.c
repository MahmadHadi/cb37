#include <stdio.h>
#include <ctype.h>

void main(){ 
    char ch = 'J';
    
    char ans = tolower(ch); // 'j'

    printf("ch = %c, ans = %c \n", ch, ans);

    char ans2 = toupper(ch); // 'J'
    printf("ans2 = %c \n", ans2);
}

// 'M' - 'A' + 'a' = 77 - 65 + 97 = 109

// 'A' - 'A' + 'a' = 'a'

// 'L' - 'A' + 'a' = 108

// 'a' - 'A' + 'a' = 97 - 65 + 97