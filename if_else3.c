// write a program that check number is even or odd
#include<stdio.h>
void main()
{
      int num;

      printf("enter number : ");
      scanf("%d",&num);

      // printf("%d",4%2);
      // printf("%d",4/2);

      if(num%2==0)
      {
            printf("number is even");
      }
      else
      {
            printf("number is odd");
      }
}