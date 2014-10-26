#include <stdio.h>
// komantarz
/*komentarz
*/
// FUnkcja, ktora uruchaniana jest na poczatku dzialania programu
int main(int argn, char **argv)
{
          int dzien_miesiaca;

          dzien_miesiaca=10;

          int rok=2014;

          float przecinek=3.141592653589;

          int zpr =(int)przecinek;

          char znak='A';      // ! Uwaga na pojedynczy nawias

          long liczba=12345678901;

      printf("dzien miesiaca=%d \n",dzien_miesiaca);
      printf("Rok=%d \n",rok);
      printf("Przecinek=%.4f \n",przecinek);
      printf("Rok=%d \n",zpr);
      printf("Znak=%c \n",znak);
      printf("liczba=%ld\n",liczba);
      int dzien;
      printf("Podaj dzien");
      scanf("%d",&dzien);
      printf("Podany dzien to %d \n", dzien);
      if (dzien > 10){
      printf("oby nie piatek\n");
      }
      else
      {
      printf("no to masz szczescie\n");
      }
      switch (dzien)
      {

          case 1  : printf("jest poniedzialek\n"); break;
          case 2  : printf("jest wtorek\n"); break;
          default : printf("zly dzien\n");
      }
      return 0;

}
