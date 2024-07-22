#include<Stdio.h>
void main(){
	int n,i;
	double e=1.0;
	printf("enter the number of terms to estimale:");
	scanf("%d",&n);
	double term=1.0;
	for(i=1;i<=n;i++){
		term/=i;
		e+=term;
	}
	printf("estimate value of e with %d terms: %if\n",n,e);
}
