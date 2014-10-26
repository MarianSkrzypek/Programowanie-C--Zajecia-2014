#include <stdio.h>
#include <math.h>
int main()
{
float a,b,c;
printf("Podaj wartosc zmienno przecinkowa dla a\n");
scanf("%f",&a);
printf("Podaj wartosc zmienno przecinkowa dlac b\n");
scanf("%f",&b);
printf("Podaj wartosc zmienno przecinkowa dla c\n");
scanf("%f",&c);

float d;
d=c*(a+b*(a+b))-a*a*a+b-c;
printf("wartosc d=%.7f gdzie %f to wartosc powyzszego wyrazenia \n",d,d);
return 0;
}
