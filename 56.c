#include<stdio.h>
void main(){
	int i,n;
	scanf("%d",&n);
	while(n!=0){
		if(n>1000){
			printf("M");
			n=n-1000;
		}
		else if(n>=900){
			printf("CM");
			n=n-900;
		}
		else if(n>=500){   
			printf("D");;
			n=n-500;
		}
		else if(n>=400){
		printf("CD");
		n=n-400;
	}
	else if(n>=100){
		printf("C");
		n=n-100;
	}
	else if(n>=90){
		printf("XC");
		n=n-90;
	}
	else if(n>=50){
		printf("L");
		n=n-50;
	}
	else if(n>=40){
		printf("XL");
		n=n-40;
	}
	else if(n>=10){
		printf("X");
		n=n-10;
	}
	i++;
}
}
