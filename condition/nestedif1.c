// write a program that find big number between 3 number

#include<stdio.h>
void main()
{
      int a,b,c;

      printf("enter number1 : ");
      scanf("%d",&a);

      printf("enter number2 : ");
      scanf("%d",&b);

      printf("enter number3 : ");
      scanf("%d",&c);


      // printf("%d %d %d",a,b,c);

      if(a>b)
      {
            if(a>c)
            {
                  printf("\na is max");
            }
            else if(c>a)
            {
                  printf("\nc is max");
            }
      }

      else if(b>a)
      {
            if(b>c)
            {
                  printf("\nb is max");
            }
            else if(c>b)
            {
                  printf("\nc is max");
            }
      }

      else if(c>a)
      {
            if(c>b)
            {
                  printf("\nc is max");
            }
      }

      else{
            printf("all are equal");
      }

}