#include <stdio.h>
int main() {    
 
    char name[] = "Hadi naynai";
    // printf("%c ", name[2]);
    // ! size == sizeof(name) -> t 

    for (int i = 0; i < sizeof(name); i++) {
        printf("%c", name[i]);
    }
    return 0;
}