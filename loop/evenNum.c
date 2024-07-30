// *    print 2 4 6 8 ... n ( n = input ) 

#include <stdio.h>
void main() {
    int i = 1;
    int count = 2;
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    while (i <= n) {
        printf("%d ", count); 
        count += 2;
        i++;
    }
}

// n = -12 
// i = 1 
// i <= n -> 1 <= -12 -> f -> loop end


// i = 1
// count = 2 
// n {input } = 10 

// print count // 2 
// count = count + 2 // count = 2 + 2 = 4 

// print count // 4 
// count += 2 // count = count + 2 = 4 + 2 = 6 

// print count // 6 
// count += 2 // count = 8

// print count // 8
// count += 2 // count = 10

// print count // 10
// count += 2 // count = 12 

// .
// .
// . 
