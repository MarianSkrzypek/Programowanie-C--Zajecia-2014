#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand( time( NULL ) );
int k=rand()%5;
printf("wylosowalem %d \n",k);
int u;
printf("Podaj liczbe od 0 do 5:  ");
scanf("%d",&u);
if(k==u)
{
printf("wygrales");
}
else if(u-1 || u+1 ==k)
{
printf("blisko");
}
else
{
  printf("przegrales");
}
return 0;
}
