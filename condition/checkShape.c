// * input -> height and width and check shape { square, rectangle }
// *         height = 100, width = 50 -> rectangle
// *         height = 50, width = 50 -> square
// *         height = 70, width = 70 -> square

#include <stdio.h>
void main() {
    int height, width;
    printf("Enter height : ");
    scanf("%d", &height);

    printf("Enter width : ");
    scanf("%d", &width);

    // printf("Enter height, width : ");
    // scanf("(%d,%d)", &height, &width);

    // printf("%d %d ", height, width);

    if (height == width)
        printf("Square ");
        
    if (height != width)
        printf("Rectangle ");
}