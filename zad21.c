#include <stdio.h>
double a,b;
double W(a,b){
if(a>b){
    return a;
}
        else{
            return b;
}
}
    double M(a,b){
if(a<b){
        return a;
}
else{
        return b;
}
}
    double praw(a,b){
        return (W(a,b)-M(a,b))/(W(a,b)+M(a,b));
}
int main()
{
        printf("wartosc praw= %lf",praw(3,1));
            return 0;
}
