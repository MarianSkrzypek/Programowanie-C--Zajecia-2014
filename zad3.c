#include <stdio.h>
#include <math.h>
int main()
{
float a=1.62;
float b=3.14;
float c=2.72;

float d;
d=c*(a+b*(a+b))-a*a*a+b-c;
printf("wartosc d=%.7f gdzie %f to wartosc powyzszego wyrazenia \n",d,d);
return 0;
}
