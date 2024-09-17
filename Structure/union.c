#include <stdio.h>
#include <string.h>
int main() {    
 
    typedef union Student {
        char name[30]; // 32 
        char div; // 1 
        float pr;  // 4 
        int class; // 4
        int age; // 4 
    } myStudent;
    
    union Student s1;
    s1.age = 11;
    // s1.class = 6;
    // s1.div = 'a';
    // s1.pr = 90.3;
    // strcpy(s1.name, "s1 student");
    
    printf("s1.age = %d \n", s1.age);
    // printf("s1.class = %d \n", s1.class);
    // printf("s1.div = %c \n", s1.div);
    // printf("s1.pr = %.2f \n", s1.pr);
    // printf("s1.name = %s \n", s1.name);

    printf("sizeof(s1) = %d ", sizeof(s1));
    return 0;
}