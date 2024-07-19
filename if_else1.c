#include<stdio.h>
void main()
{
      // write a program that check user is eligible for licence

      int age;

      printf("enter your age : ");
      scanf("%d",&age);

      if(age>=18)
      {
            // if condition becomes true
            printf("you are eligible for driving licence ");
      }
      else
      {
            // if condition becomes false
            printf("you are not eligible for driving licence ");
      }

}