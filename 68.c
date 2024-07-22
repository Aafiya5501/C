# include<stdio.h>
void main(){
	int x,y,c=1,i;
	printf("enter the value of x:");
	scanf("%d",&x);
	printf("enter the value of y:");
	scanf("%d",&y);
	for(i=0;i<y;i++){
		c*=x;
	}
	printf("%d^%d=%d\n",x,y,c);
}
