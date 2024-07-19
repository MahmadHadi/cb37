#include<stdio.h>
void main()
{
      char latter;

      printf("enter a latter : ");
      scanf("%c",&latter);

      if(latter=='a' || latter=='e' || latter=='i' || latter=='o' || latter=='u')
      {
            printf("vowel");
      }
      else
      {
            printf("consonate");
      }
}