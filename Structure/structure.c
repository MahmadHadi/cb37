// 100 -> students 
// name {str}, age {int}, class {int}, div {char}, pr {float}

#include <stdio.h>
#include <string.h>
int main() {    
    typedef struct Student {
        char name[30]; // 31 
        char div; // 1 
        float pr;  // 4 
        int class; // 4 
        int age; // 4 
    } myStudent;

    // struct Student objName;
    // struct Student hadi;
    myStudent hadi;
    hadi.age = 10;
    hadi.class = 5;
    hadi.div = 'a';
    hadi.pr = 80.3;
    // hadi.name = "hadi nayani";
    strcpy(hadi.name, "hadi nayani");

    // printf("sizeof(hadi) = %d \n", sizeof(hadi));
    // printf("sizeof(hadi) = %d \n", sizeof(hadi.age));

    printf("hadi.age = %d \n", hadi.age);
    printf("hadi.class = %d \n", hadi.class);
    printf("hadi.div = %c \n", hadi.div);
    printf("hadi.pr = %.2f \n", hadi.pr);
    printf("hadi.name = %s \n", hadi.name);

    struct Student s1;
    s1.age = 11;
    s1.class = 6;
    s1.div = 'a';
    s1.pr = 90.3;
    strcpy(s1.name, "s1 student");
    
    // printf("sizeof(s1) = %d \n", sizeof(s1));

    printf("s1.age = %d \n", s1.age);
    printf("s1.class = %d \n", s1.class);
    printf("s1.div = %c \n", s1.div);
    printf("s1.pr = %.2f \n", s1.pr);
    printf("s1.name = %s \n", s1.name);

    // ! 2nd method 
    struct Student s2 = {"s2 Student", 'a', 70.8, 7, 13};
    printf("s2.age = %d \n", s2.age);
    printf("s2.class = %d \n", s2.class);
    printf("s2.div = %c \n", s2.div);
    printf("s2.pr = %.2f \n", s2.pr);
    printf("s2.name = %s \n", s2.name);
    return 0;
}