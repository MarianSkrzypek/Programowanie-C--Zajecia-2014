#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
/*                            ZAD A
int a;
int r=20; //rozmiar tablicy
int tab[r];
for(a=1;a<=r;a++){
tab[a]=a;
printf("tab[%d]=%d \n",a,tab[a] );
}
--------------------------------------------------------*/
/*                            ZAD B
int a;
int r=20; //rozmiar tablicy
int w=20;
int tab[r];
for(a=1;a<=r;a++){
tab[a]=w--;
printf("tab[%d]=%d \n",a,tab[a] );
}
--------------------------------------------------------*/
/*                           ZAD C
int tab[20],i;
for(i=0;i<20;i++){
  tab[i]=2*i;
}
for(i=0;i<20;i++){
  printf("%d\n",tab[i]);
}
--------------------------------------------------------*/
/*                          ZAD D
int tab[20],i;
for(i=1;i<=20;i++){
  tab[i]=i*i;
}
for(i=0;i<=20;i++){
  printf("%d\n",tab[i]);
}
--------------------------------------------------------*/
/*zad e*/
int tab[20],i;
for(i=1;i<=20;i++){
  tab[i]=(tab[i-1]*tab[i-1]);
}
for(i=0;i<=20;i++){
  printf("%d\n",tab[i]);
}
/*zad f
int tab[10], i;
srand(time(NULL));
for (i=0; i<10; i++){
tab[i] = rand()%20;
printf("tab[%d]= %d \n",i,tab[i]);
}
---------------------------------------------------------*/
    return 0;

}
