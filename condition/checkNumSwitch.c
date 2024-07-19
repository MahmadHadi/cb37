#include <stdio.h>
void main() {
    int num = 22;

    switch (num) {
        case 2:
            printf("Two ");
            if (num >= 1 && num <= 2) {
                printf("Num is between 1 and 2 \n");
            }
            break;
        case 4:
            printf("Four ");
            break;
        case 6:
            printf("six ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 10:
            printf("Ten ");
            break;
        case 12:
            printf("Twelve");
            break;
        // case 12:
        //     printf("Twelve 2 ");
        //     break;
        default:
            printf("Invalid input ");
            break;
    }
}


// if (num == 10) {
//     code 1
// } else if (num == 10) {
//     code 2 
// }