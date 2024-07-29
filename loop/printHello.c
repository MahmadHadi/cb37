// print "hello " 10 times 
#include <stdio.h>
void main() {
    int count = 1;
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num > 0) {
        while (count <= num) {
            printf("Hello ");
            printf("%d \n", count);
            count++; // 1, 2, 3, ..., 10 
        }
        printf("count = %d ", count);
    } else {
        printf("Invalid input ");
    }
}

// count = 1 
// count <= 3 -> 1 <= 3 -> t 
//     print "Hello "
//     print count 
//     count++ // count = 2 
// count <= 3 -> 2 <= 3 -> t 
//     print "Hello "
//     print count 
//     count++ // count = 3 
// count <= 3 -> 3 <= 3 -> t 
//     print "Hello "
//     print count  
//     count++ // count = 4 
// count <= 3 -> 4 <= 3 -> f -> loop end 


// count = 1
// num = -32
// count <= num -> 1 <= -32 -> f -> loop end  