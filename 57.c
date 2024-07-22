#include<stdio.h>
#include<math.h>
void main(){
	int num,first,last,count;
	printf("enter an integer number\n");
	scanf("%d",&num);
	count=log10(num);
	first=num/pow(10,count);
	last=num%10;
	printf("first=%d\nlast=%d\n",first,last);
}



