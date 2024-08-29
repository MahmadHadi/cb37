// * nCr = n! / ((n - r)! * r!)
// 5C3 = n! / ((n - r)! * r!)
// 5! = 120 
// nCr
// n = 5, r = 3 
// 5C3 = 5! / ((5 - 3)! * 3!)
// 5C3 = 5! / (2! * 3!)
// 5C3 = 120 / (2 * 6)
// 5C3 = 120 / 12
// 5C3 = 10

#include <stdio.h>

long long int getFact(int num) {
    long long int ans = 1;
    for (int i = 1; i <= num; i++) {
        ans *= i;
    }
    return ans;
}

int getNCR(int n, int r) {
    // int ncr = getFact(n) / (getFact(n - r) * getFact(r));
    // return ncr;

    return getFact(n) / (getFact(n - r) * getFact(r));
}

int main() {

    int n = 30, r = 3;
    printf("ncr = %d ", getNCR(n, r));
    return 0;
}
    // int nFact = 1;
    // for (int i = 1; i <= n; i++) {
    //     nFact *= i;
    // }
    // int rFact = 1;
    // for (int i = 1; i <= n; i++) {
    //     rFact *= i;
    // }
    // int nMrFact = 1;
    // for (int i = 1; i <= n; i++) {
    //     nMrFact *= i;
    // }