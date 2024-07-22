#include<Stdio.h>
void main(){
	int n,sum=0,count=0,avg;
	while(1){
		printf("enter the value of a:");
		scanf("%d",&n);
	if(n==0){
		break;
	}
	sum=sum+n;
	count=count+1;
}
avg=sum/count;
printf("%d %d",sum,avg);
}
