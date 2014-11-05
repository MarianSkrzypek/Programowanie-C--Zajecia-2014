#include <stdio.h>
#include <math.h>
int main()
{
  //deklaracje dla for
int n,i,s,a,b,c,d,e,f;
printf("Podaj liczbe N\n");
scanf("%d",&n);
s=0;
for(i=1;i<=n;i++){
s+=i;
printf("Dla I= %d suma wynosi %d \n ",i,s);
}
printf("Podaj liczbe n dla petli while \n");
scanf("%d",&a);
b=0;
while(b<a)
{
b++;
c+=b;
printf("Dla I= %d suma wynosi %d \n ",b,c);
}
d=0;
e=0;
f=0;
return 0;
}
