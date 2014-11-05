#include <stdio.h>
#include <math.h>
void szescian(){
  int i,b;
  for(i=1;i<=10;i++){
  b=i*i*i;
  printf("Szescian liczby %d wynosi %d \n ",i,b);
  }
}

int main(){
szescian();
return 0;
}
