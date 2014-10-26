#include <stdio.h>
#include <math.h>
int main()
{
int a,b;
printf("Podaj liczbe A");
scanf("%d",&a);
printf("Podaj liczbe B");
scanf("%d",&b);
  if(a>=0 &&b>=0)
  {
    printf("obie liczby sa dodatnie");
  }
    if(a<=0 && b<=0)
    {
      printf("obie liczby sa ujemne");
    }
      if(a>=0 &&b<=0)
      {
        printf("maja rozne znaki");
      }
      if(a<=0 &&b>=0)
      {
        printf("maja rozne znaki");
      }
return 0;
}
