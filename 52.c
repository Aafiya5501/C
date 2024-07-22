#include<stdio.h>
void main(){
	int n,y,i=1,ans=1,x;
	scanf("%d %d",&i,&y);
	while(i<=y){
		ans=ans*x;
		i++;
	}
	printf("%d",ans);
}
