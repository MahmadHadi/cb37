// print table of 1 to 3
// num = 3
// print table of 1 
// print table of 2
// print table of 3

#include <stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    for (int j = 1; j <= num; j++) { // loop will run num time 
        // printf("%d ", j);
        for (int i = 1; i <= 10; i++) { // loop will run 10 times 
            printf("%d * %d = %d \n", j, i, i * j);
        }
        printf("\n");
    }
}