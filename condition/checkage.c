// * input -> age -> print "You can vote " if age > 18 else print "You cannot vote "

#include <stdio.h>
void main() {
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    if (age > 18) {
        printf("You can vote \n");
    } 
    if (age <= 18) {
        printf("You cannot vote \n");
    }
    printf("Good bye");
}