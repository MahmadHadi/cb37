#include <stdio.h>

void printSpace(int count) {
    for (int i = count - 1; i >= 0; i--) {
        printf("  ");
    }
    return;
}

void printStr(int count) { // count = 100 
    for (int i = 1; i <= count; i++) {
        printf("* ");
    }
    return;
}

int main() {

    // printStr(100);
    // printf("\n");
    // printStr(1);
    int height = 4;
    for (int i = 1; i <= height; i++) {
        printSpace(height - i);
        printStr(i);
        printf("\n");
    }
    printf("\n\n");
    for (int i = height; i >= 1; i--) {
        printSpace(height - i);
        printStr(i);
        printf("\n");
    }

    printf("\n\n");
    for (int i = 1; i <= height; i++) {
        printStr(i);
        printf("\n");
    }

    printf("\n\n");
    for (int i = 1; i <= height; i++) {
        printStr(height - i + 1);
        printf("\n");
    }
    return 0;
}


//       * 
//     * *
//   * * * 
// * * * *
// print "  "
// print "  "
// print "  "
// print "* "

// print "  "
// print "  "
// print "* "
// print "* "

// print "  "
// print "* "
// print "* "
// print "* "

// print "* "
// print "* "
// print "* "
// print "* "
