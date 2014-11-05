#include <stdio.h>
#include <math.h>
int main()
{
int a;
printf("Podaj warosc w przedziale od 1 do 7\n");
scanf("%d",&a);
if (a==1)
  {
    printf("Podany dzien to Poniedziałek\n");
  }
else if (a==2)
  {
    printf("Podany dzien to Wtorek\n");
  }
else if (a==3)
  {
      printf("Podany dzien to Sroda\n");
  }
else if (a==4)
  {
        printf("Podany dzien to Czwartek\n");
  }
else if (a==5)
  {
    printf("Podany dzien to Piatek\n");
  }
else if (a==6)
  {
    printf("Podany dzien to Sobota\n");
  }
else if (a==7)
  {
    printf("Podany dzien to Niedziela");
  }

else
  {
    printf("Podano zły przedział liczbowy");
  }
return 0;
}
