// *    print 2 4 6 8 ... n ( n = input ) 

#include <stdio.h>
void main() {
    int i = 1;
    int count = 2;
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    while (i < n * 2) {
        if (count % 2 == 0) { // even num
            printf("%d ", count);
        }
        i++;
        count++;
    }
}
// n = 3
// i = 1
// count = 2 

// i <= n -> 1 <= 3 -> t 
//     count % 2 == 0 -> 2 % 2 == 0 -> t 
//         print count // 2 
//     i++ // i = 2 
//     count++ // count = 3 
// i <= n -> 2 <= 3 -> t 
//     count % 2 == 0 -> 3 % 2 == 0 -> f 
//     i++ // 3 
//     count++ // count = 4 
// i <= n -> 3 <= 3 -> t 
//     count % 2 == 0 -> 4 % 2 == 0 -> t 
//         print count // 4 
//     i++ // i = 4 
//     count++ // count = 5 
// i <= n -> 4 <= 3 -> f -> loop end 