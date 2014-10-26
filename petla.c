#include <stdio.h>
#include <stdlib.h>
int main()
{
        // Chcemy wyswietlic 50 kolejnych liczb calkowitych
        // Petla for
        int i;
        int c;

        for(i=1;i<=50;i++)
        {
        if(i%2 ==0){
        printf("i=%d \n",i);
        }
        }
int suma=0;
for(i=1;i<=50;i++){

suma+=i;
}
printf("suma wynosi %d\n",suma);

//Petla while
int j;
while( j<=20 )
  {
  printf("j = %d \n", j);
  j++;
  }

  
return 0;
}
