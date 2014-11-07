#include <stdio.h>
#include <math.h>
int main()
{
int i,b;
for(i=1;i<=10;i++){
b=i*i*i;
printf("Szescian liczby %d wynosi %d \n ",i,b);
}
i=0;
while(i<=10){
i++;
b=i*i*i;
printf("Szescian liczby %d wynosi %d \n ",i,b);
}
return 0;
}
