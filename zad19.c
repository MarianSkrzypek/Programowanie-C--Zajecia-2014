#include <stdio.h>
int K;
void piramida(){
 int i,l,j;

    printf("ile gwiazdek?:");
    scanf("%d",&K); // N przechowuje ilosc gwiazdek
    printf("\n");

    for(i=0; i<K; i++)
    {
         for(j=0; j<=i; j++)
         {
            printf("*");
         }
         printf("\n");
    }
  }

int main(){
piramida();
return 0;
}
