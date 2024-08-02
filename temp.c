#include <stdio.h>
void main()
{
    // Output

    int num;
    int fact = 1;
    printf("Enter a number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("fact = %d ", fact);
}

// num = 3 
// fact = 1 

// fact = fact * 3 -> 1 * 3 = 3 -> i = 1 
// i++ // i = 2 

// fact = fact * num -> 3 * 3 = 9 -> i = 2 
// i++ // i = 3 

// fact = fact * num -> 9 * 3 = 27 -> i = 3 
// i++ // i = 4 

// i <= num -> 4 <= 3 -> f - loop end 


// num = 3 
// fact = 1 

// fact = fact * 1 -> 1 * 1 = 1-> i = 1 
// i++ // i = 2 

// fact = fact * i -> 1 * 2 = 2 -> i = 2 
// i++ // i = 3 

// fact = fact * i -> 2 * 3 = 6 -> i = 3 
// i++ // i = 4 

// i <= num -> 4 <= 3 -> f - loop end 

