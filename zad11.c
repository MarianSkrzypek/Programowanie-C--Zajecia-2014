#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  int lw=0,lb=0,lp=0,lg=0;
  while(lg<5){
    srand( time( NULL ) );
int k=rand()%5;
printf("wylosowalem %d \n",k);
int u;
printf("Podaj liczbe od 0 do 5:  \n");
scanf("%d",&u);
if(k==u)
{
lg++;
lw=lw+1;
printf("wygrales\n");
}
else if(u+1 ==k || u-1==k)
{
lg++;
lb=lb+1;
printf("blisko\n");
}
else
{
lg++;
lp=lp+1;
  printf("przegrales\n");
}
}
if(lw==1){
printf("Gracz %d raz wygral\n",lw);
}
else{
printf("Gracz %d razy wygral\n",lw);
}
if(lb==1){
  printf("Gracz %d raz byl blisko\n",lb);
}
else{
  printf("Gracz %d razy byl blisko\n",lb);
}
if(lp==1){
  printf("Gracz %d raz przegral\n",lp);
}
else{
  printf("Gracz %d razy przegral\n",lp);
}

return 0;
}
