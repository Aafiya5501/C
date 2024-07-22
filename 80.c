#include<stdio.h>
void main(){
	int person,height,weight,n,count=0;
	printf("enter value of n:");
	scanf("%d",&n);
	for(person=0;person<n;person++){
		printf("\n enter detail of person- %d",person+1);
		printf("\n enter heighth: ");
		scanf("%d",height);
		printf("\n enter weight:");
		scanf("%d",& weight);
		if(height>170){
			if(weight<50){
				count++;
			}
		}
	}
	printf("\n total person having height>170 and weight<50:%d", count);
}
