#include<Stdio.h>
void main(){
	int n;
	printf("enter size of arr:");
	scanf("%d",&n);
	int i,j,arr[n],cp=0,cn=0;
	for(i=0;i<=n;i++){
		printf(" enter number [%d]:",i);
	scanf("%d",&arr[i]);
	}
	if(arr[0]>0){
		cp++;
	}
	else{
		cn++;
	}
	for(i=0;i<=n;i++){
		if(arr[i]>=0){
			cp++;
		}
		else{
			cn++;
		}
	}
	printf(" positive:%d and negative:%d",cp,cn);
	
}
