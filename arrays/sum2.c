// add first and last
#include<stdio.h>

int main(){
	int arr[10],res[5],i;
	printf("Enter 10 elements:");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<5;i++){
		res[i]=arr[i]+arr[9-i];
	}
	printf("The sum of elements is:");
	for(i=0;i<5;i++){
		printf("%d ",res[i]);
	}
	return 0;
}
