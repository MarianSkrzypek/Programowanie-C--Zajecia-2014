#include <stdio.h>
#include <math.h>

#define PI 3.1415

double fun(int n)
{
    double ret = 0;
    int i;
    for(i=1;i<=n;i++)
    {
      ret = ret+1.0/(i * i);
    }
    return ret;
}

int main(int larg,char **targ)
{
  int k;
  printf("Podaj dokladnosc: ");
  scanf("%d", &k);
  printf("Wynik=%1f \n",fun(k));
  return 0;
}
