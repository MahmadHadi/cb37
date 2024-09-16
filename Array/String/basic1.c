#include <stdio.h>
int main() {    
 
    char str[] = {'h', 'a', 'd', 'i'}; // ! 1D array of char 
    int size = sizeof(str) / sizeof(str[0]);

    for (int i = 0; i < size; i++) {
        printf("%c", str[i]);
    }
    return 0;
}