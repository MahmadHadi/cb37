// puts and gets 

#include <stdio.h>
int main() {    
 
    char name[30];
    printf("Enter your name : ");
    gets(name); // ! input 
    puts(name); // ! output 
    printf("name = %s ", name);

    printf("\n-----------\n");

    char name2[30];
    printf("Enter name : ");
    scanf("%s", &name2);
    printf("name2 = %s ", name2);

    return 0;
}