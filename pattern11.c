#include<stdio.h>
void main(){
	int i,j,n=5,k=0;
	for(i=5;i>=1;i--){
		for (j=5;j>i;j--){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
}

