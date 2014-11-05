#include <stdio.h>
#include <math.h>
void liczba(){
  int p;
  printf("Podaj liczbe calkowita");
  scanf("%d",&p);
  if(p>=0)
    {
      printf("liczba ta jest dodania");
    }
    else
      {
        printf("liczba ta jest ujemna");
      }
}

int main()
{
liczba();
return 0;
}
