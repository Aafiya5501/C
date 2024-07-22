#include<Stdio.h>
void main(){
	int i,n,j,sum=0;
	printf("enter a positive integer n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		int innersum=0;
		for(j=1;j<=i;j++){
			innersum=innersum+j;
		}
		sum=sum+innersum;
	}
	printf("sum of the series is:%d\n",sum);
}
