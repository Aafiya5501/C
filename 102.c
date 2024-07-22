#include<stdio.h>
int max(int a,int b);
	void main(){
		int a,b;
		printf("enter the value of a and b:");
		scanf("%d %d",&a,&b);
		int maximum=max(a,b);
		printf("%d",maximum);
	}
		
	int max(int a,int b){
	
		if(a>b){
			return a;}
			else{
				return b;
			}
	}
	
	



