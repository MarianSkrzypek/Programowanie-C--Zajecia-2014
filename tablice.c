#include <stdio.h>

int main()
{
//tablice
int  tablica[50];
int tab2[10]= { 1,2,3,4,5,6,7};
int tab3[] = {123,1234,142 };

int i;
for (i=0;i<50;i++)
  {
    tablica[i]=i+1;
    printf("tablica= %d \n",tablica[i]);
  }


      return 0;

}
