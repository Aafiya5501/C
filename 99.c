#include<Stdio.h>
void main()
{
int no1,no2;
printf("Enter the value of no1 and no2: ");
scanf("%d %d",&no1,&no2);
int *pt1=&no1;
int *pt2=&no2;


printf("%d\n",*pt1);
printf("%d\n",*pt2);
int temp;
temp=pt1;
pt1=pt2;
pt2=temp;


printf("%d\n",*pt1);
printf("%d\n",*pt2);

}
	

