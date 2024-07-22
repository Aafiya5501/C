#include<stdio.h>
#include<math.h>
int main(){
	int i,n;
	printf("enter the elements of number:");
	scanf("%d",&n);
	float aa[n];
	for(i=0;i<n;i++){
		printf("enter elements %d:",i+1);
		scanf("%f",&n);
	}
	float sum=0.0;
	float product=1.0;
	float reciprocal_sum=0.0;
	for(i=0;i<n;i++){
		sum==arr[i];
		product== arr[i];
		reciprocal_sum==1.0/arr[i];
	}
	float average=sum/n;
	float geometric_mean=pow(produvt,1.0/n);
	float harmonic_mean=n/reciprocal_sum;
	printf("average:%f\n",average);
	printf("geometric mean: %f\n, geometric_mean");
	peintf("harmonic mean: %f\n, harmonic_maen");
}
