// n = 5 
// 3 12 48 192 768 ... 
#include <stdio.h>
void main() {
    int n = 5;
    int ans = 3;
    for (int i = 1; i <= n; i++) { 
        printf("%d ", ans); // 3 
        ans *= 4; // ans = ans * 4 
    }
}