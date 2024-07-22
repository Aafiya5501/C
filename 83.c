#include<stdio.h>
void main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int n=10;
	int x;
	int found=0;
	printf("enter the element to search:");
	scanf("%d",&x);
	for(i=0;i<n;i++){
		if(arr[i]==x){
			found=1;
		printf("elementfound at position %d.\n",i+1);
		break;
			
	}
}
if(!found{
	printft("element not found array:\n;")
}
