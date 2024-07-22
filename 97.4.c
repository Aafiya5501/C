#include<stdio.h>
void main(){
char*p,x=10;
p=&x;
printf("%p\n",*p);
printf("%p",&x);	
}
