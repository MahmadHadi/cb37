// num -> input 
// get sum of all numbers between 1 to num 

// num = 5 
// ans = 1 + 2 + 3 + 4 + 5 
// num = 3 
// ans = 1 + 2 + 3 

#include <stdio.h>
void main() {
    int num = 3;
    int ans = 0;

    for (int i = 1; i <= num; i++) {
        ans = ans + i;
        printf("%d \n", ans);
    }

    printf("ans = %d ", ans);
}
// ans = 1 

// i = 1 

// ans = ans + i => 2 


// ans = 0 
// i <= 3 -> 1 + 2 + 3 = 6 
// i <= 3 -> 6 = 6 

// i = 1 
// ans = ans + i -> 0 + 1 = 1 
// i++ // i = 2 

// ans = ans + i -> 1 + 2 = 3 
// i++ // i = 3 

// ans = ans + i -> 3 + 3 = 6 
// i++ // i = 4 -> i = i + 1 

// i <= 3 -> 4 <= 3 -> f -> loop end 