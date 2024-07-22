#include<stdio.h>
void main(){
	int i,j,data[3][3],pos=0,neg=0,zero=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter array element=");
			scanf("%d",&data[i][j]);
			if(data[i][j]>0)
			pos=pos+1;
			else if(data[i][j]<0)
			neg=neg+1;
			else 
			zero=zero+1;
	}
}
	printf("negative=%d ,positive=%d ,zero=%d",neg,pos,zero);

	
}
