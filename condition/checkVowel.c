// * ch -> char -> check if given char is an vowel or not 
// * vowel = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'}
// ch = 'A' -> tolower(ch) -> 'a' 

#include <ctype.h> // * to use tolower function -> uppercase to lowercase 
#include <stdio.h>

void main() {
    char ch;
    printf("Enter a char : ");
    scanf("%c", &ch);
    
    char temp = ch;

    ch = tolower(ch);
        
    printf("ch = %c, temp = %c \n", ch, temp);

    int flag = 0;

    if (ch == 'u') 
        flag = 1;        

    if (ch == 'a') 
        flag = 1;        
        
    if (ch == 'e') 
        flag = 1;       

    if (ch == 'i') 
        flag = 1;       

    if (ch == 'o') 
        flag = 1;  

    if (flag == 0) {
        printf("%c is an Consonant ", temp);
    }    
    if (flag == 1) {
        printf("%c is an Vowel ", temp);
    }

    // if (ch == 'u') 
    //     printf("%c is an Vowel ", ch);

    // if (ch == 'a') 
    //     printf("%c is an Vowel ", ch);
        
    // if (ch == 'e') 
    //     printf("%c is an Vowel ", ch);

    // if (ch == 'i') 
    //     printf("%c is an Vowel ", ch);

    // if (ch == 'o') 
    //     printf("%c is an Vowel ", ch);

    // if (ch == 'b') 
    //     printf("%c is an Consonant ", ch);

}