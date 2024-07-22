#include<stdio.h>
void main(){
	int a,i=1;
	printf("enter a number");
	scanf("%d",&a);
	printf("the factors of %d are:",a);
	while(i<=a)
	{
		if(a%i==0)
		{
			printf("%d\t",i);
			i++;
		}

		}
	}
	
	

