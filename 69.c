#include<Stdio.h>
void main(){
	int num,factorial=1,i;
	printf("enter a positive integer:");
	scanf("%d",&num);
	for(i=1;i<=num;++i){
		factorial*=i;
	}
	printf("factorial of %d=%d\n",num,factorial);
}
