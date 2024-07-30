// 1 2 3 ... n using for loop 

#include <stdio.h>
void main() {
    int n = 20;
    printf("Enter a number : ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) { // i -> 1 - 10 
        printf("%d ", i);
    }
}