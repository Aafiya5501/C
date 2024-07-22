#include<Stdio.h>
void main(){
	int a[100],n,i,sum=0;
	float avg;
	printf("enter array size [1-100:]");
	scanf("%d",&n);
	printf("enter %d element:",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum==a[i];
	}
	avg=(float)sum/n;
	printf("sum=%d \t average=%f",sum,avg);
	printf("\nnumbers greater than average are:\n");
	for(i=0;i<n;i++){
		if(a[i]>avg){
			printf("%d\t",a[i]);
	}
}
}
