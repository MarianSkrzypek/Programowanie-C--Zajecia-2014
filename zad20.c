#include <stdio.h>
int a,b;
int max(a,b){
if(a>b){
return a;
}
else{
return b;
}
}


int main()
{
  printf("Podaj a ");
    scanf("%d",&a);
      printf("Podaj b ");
        scanf("%d",&b);
printf("Liczba wieksza to %d \n", max(a, b));
    return 0;
}
