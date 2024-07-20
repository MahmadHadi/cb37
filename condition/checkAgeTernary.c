// age -> input -> age > 18 -> nationality -> input (Indian ? (Y / N)) -> Y && age > 18 -> print "You can vote "
#include <stdio.h>
void main()
{
    int age;
    char nationality;

    printf("Enter your age : ");
    scanf("%d", &age);

    if (age > 18) {
        fflush(stdin);
        printf("Enter your nationality (Indian y / n) : ");
        scanf("%c", &nationality);

        if (nationality == 'y') {
            printf("You can vote ");
        }
        else {
            printf("Nationality does not match \n");
            printf("You can't vote ");
        }
    }
    else {
        printf("Your age below 18 \n");
        printf("You can't vote ");
    }
}

// age = 20 {scanf age }

// 20 > 18 -> t
//     nationality = 'y' {scanf }

//     nationality == 'y' -> 'y' == 'y' -> t
//         print "YOU can vote "

// -------------------------

// age = 12 {scanf age }

// age > 18 -> 12 > 18 -> f
// else
//     print "You can not vote "

// ---------------------------

// age = 20

// age > 18 -> 20 > 18 -> t
//     nationality = 'n' {scanf nationality}

//     nationality == 'y' -> 'n' == 'y' -> f
//     else
//         print "You cannot vote "