#include<stdio.h>
void main(){
double*p,x=10;
p=&x;
printf("%lf\n",*p);
printf("%lf",&x);	
}
