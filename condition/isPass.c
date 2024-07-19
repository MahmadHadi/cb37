// * check if student is pass or fail 
// *     input -> student marks -> if marks > 40 -> print "pass "
// *                               if marks <= 40 -> print "fail "
    
#include <stdio.h>
void main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks > 40) {
        printf("Pass ");
    }   

    if (marks <= 40) {
        printf("Fail ");
    }    
}
