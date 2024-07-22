#include<stdio.h>
void printArray(int n){
    printf("%d ",n);
}
int main(){
    int n;
    scanf("%d",&n);
    int i;
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printArray(arr[i]);
    }
    return 0;
}
