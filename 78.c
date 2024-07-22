#include<stdio.h>
void main(){
	int n;
	printf(" enter size of arr:");
	scanf("%d",&n);
	int i,j,arr[n],ce=0,co=0;
	for(i=0;i<=n;i++){
		printf("enter number [%d]:",i);
		scanf("%d",& arr[i]);
	}
	if(arr[i]%2==0){
		ce++;
	}
	else{
		co++;
	}
	for(i=0;i<=n;i++){
		if(arr[i]%2==0){
			ce++;
		}
		else{
			co++;
		}
	}
	printf("even:%d and odd:%d",ce,co);
}
