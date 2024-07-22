#include<stdio.h>
void swapnumbers(int *a,int *b){
	int temp = *a;
    *a = *b;
    *b = temp;
}
void main(){
	int num1,num2;
	printf("enter first number:");
	scanf("%d",&num1);
	printf("enter second number:");
	scanf("%d",&num2);
	printf("original number: num1=%d,num2=%d\n",num1,num2);
	swapnumbers(&num1,&num2);
	printf("swapnumbers: num1=%d,num2=%d\n",num1,num2);
	
}


	

