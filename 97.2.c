#include<Stdio.h>
void main(){
float *p,x=10;
p=&x;
printf("%f\n",*p);
printf("%f",&x);	
}
