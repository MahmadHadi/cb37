// write a program that perform basic calc

#include<stdio.h>
void main()
{
      int choise,a,b;

      printf("1->addition  2->subtraction 3->multiplication 4->division");
      
      printf("\nenter your choise : ");
      scanf("%d",&choise);

      if(choise==1)
      {
            printf("enter a : ");
            scanf("%d",&a);

            printf("enter b : ");
            scanf("%d",&b);

            printf("addition : %d",a+b);
      }

      else if(choise==2)
      {
            printf("enter a : ");
            scanf("%d",&a);

            printf("enter b : ");
            scanf("%d",&b);

            printf("subtraction : %d",a-b);
      }

      else if(choise==3)
      {
            printf("enter a : ");
            scanf("%d",&a);

            printf("enter b : ");
            scanf("%d",&b);

            printf("multiplication : %d",a*b);
      }

      else if(choise==4)
      {
            printf("enter a : ");
            scanf("%d",&a);

            printf("enter b : ");
            scanf("%d",&b);

            printf("division : %d",a/b);
      }

      else{
            printf("invalid input");
      }
}