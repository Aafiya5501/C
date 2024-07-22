#include<Stdio.h>
void main(){
	int arr[5],i;
	for(i=0;i<=5;i++){
		printf("number in reverse order:");
		scanf("%d",& arr[i]);
	}
	for(i=5;i>=0;i--){
		printf("arr[%d]:%d\n",i,arr[i]);
	}
}
