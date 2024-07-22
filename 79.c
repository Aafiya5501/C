#include<stdio.h>
void main(){
	int i,n,k=0,a,x;
	printf(" enter size of array:");
	scanf("%d",&n);
	int arr[n];
	float avg;
	printf("enter number:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		k=k+arr[i];
		avg=k/n;
	}
	printf(" sum of array elements=%d\n",k);
	printf("averag of elements=%2f\n",avg);
	a=arr[0];
	for(i=0;i<n;i++)
		if(arr[i]>a)
		a=arr[i];
		printf("greater elements=%d\n",a);
		x=arr[0];
		for(i=0;i<n;i++)
		if(arr[i]<x)
		x=arr[i];
		printf("lowest elements=%d",x);
	}

