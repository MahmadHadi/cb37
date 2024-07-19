#include <stdio.h>
void main()
{
      int a, b, c;
      float total;
      char sign = '%';

      printf("enter marks of maths : ");
      scanf("%d", &a);

      printf("enter marks of science : ");
      scanf("%d", &b);

      printf("enter marks of english : ");
      scanf("%d", &c);

      if ((a > 100 || a < 0) || (b > 100 || b < 0) || (c > 100 || c < 0))
      {
            printf("invalid marks");
      }

      else
      {
            total = (a + b + c) / 3;
            printf("\npercentage : %.2f %c", total, sign);

            if (total <= 40)
            {
                  printf("\nstatus : fail");
            }
            else
            {
                  printf("\nstatus : pass");
            }

            if (total > 80 && total <= 100)
            {
                  printf("\ngrad : A");
            }
            else if (total > 60 && total <= 80)
            {
                  printf("\ngrad : B");
            }
            else if (total > 40 && total <= 60)
            {
                  printf("\ngrad : c");
            }
            else
            {
                  printf("\ngrad : D");
            }
      }
}