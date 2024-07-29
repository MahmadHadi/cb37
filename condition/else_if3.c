#include<stdio.h>
void main()
{
      int num;

      printf("enter a number : ");
      scanf("%d",&num);

      if(num==1)
      {
            printf("sunday");
      }
      else if(num==2)
      {
            printf("monday");
      }

      else if(num==3)
      {
            printf("tuesday");
      }
      else if(num==4)
      {
            printf("wednesday");
      }
      else if(num==5)
      {
            printf("thurstday");
      }
      else if(num==6)
      {
            printf("friday");
      }
      else if(num==7)
      {
            printf("saturday");
      }
      else{
            printf("invalid input");
      }
}