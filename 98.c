#include<stdio.h>
void main(){
	 int*ptr;
	 int *p;
	 int a,b;
	 printf("enter the value of a and b");
	 scanf("%d %d",&a,&b);
	 ptr=&a;
	 p=&b;
	 printf("%d",(*ptr+*p));
}
