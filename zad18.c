#include <stdio.h>
int N;
void star(N){
 int i,j;
    for(i=0; i<1; i++)
    {
         for(j=0; j<=N; j++)
         {
            printf("*");
         }
         printf("\n");
    }
  }

int main(){
star(5);
return 0;
}
