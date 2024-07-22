#include<stdio.h>
void main(){
	int i,n;
	printf("enter the number of elements in the array:");
	scanf("%d", n);
	int arr[n],count=0;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]%3==0){
			count++;
			printf(" number of elements divisible by 3 in the array:%d\n",count);
			
		}
	}
}
