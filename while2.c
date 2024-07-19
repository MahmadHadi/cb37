// ************** upto 100

#include<stdio.h>
void main()
{
      int number=1;
      int count;
      char symbol;

      printf("enter a symbol : ");
      scanf("%c",&symbol);

      printf("enter number : ");
      scanf("%d",&count);

      while(number<=count)
      {
            printf("%c ",symbol);
            number=number+1; //incriment
      }

      // printf("*");
      // printf("*");
      // printf("*");

}