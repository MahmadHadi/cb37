#include <stdio.h>
void main() {
    // continue;, break; -> statements 

    // continue; -> skip 
    // break; -> end 

    for (int i = 1; i <= 10; i++) {
        if (i == 3) {
            continue;
        }
        printf("%d ", i);
        continue;
        printf("Hello world \n");
    }

    printf("-------------\n");

    for (int i = 1; i <= 10; i++) {
        if (i == 3) {
            break;
        }
        printf("%d ", i); // 1 
        break;
        printf("Hello world \n");
    }
    
    // code 
    printf("\n -------------\n");

    for (int i = 1; i <= 5; i++) {
        if (i % 2 == 0) { // even 
            continue;
        } else {
            printf("%d ", i);
        }
    }

    printf(" \n-------------\n");

    for (int i = 1; i <= 5; i++) {
        if (i % 3 == 0) { 
            break;
        }
        printf("%d ", i);
    }
}