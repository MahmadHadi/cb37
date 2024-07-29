// write a program that find positive , negetive or 0
#include <stdio.h>
void main()
{
      int number;

      printf("enter a number : ");
      scanf("%d", &number);

      if (number < 0)
      {
            printf("number is negetive");
      }
      else if (number > 0)
      {
            printf("number is positive");
      }
      else if(number==0)
      {
            printf("number is zero");
      }
      else{
            printf("invalid input");
      }
}