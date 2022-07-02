//reverse of an array
#include<stdio.h>

int main(){
	int arr[10],i,j,temp;
	
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Given array:");
	
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	
	for(i=0;i<=4;i++){
		temp=arr[i];
		arr[i]=arr[9-i];
		arr[9-i]=temp;
	}
	
	printf("\nReversed array:");
	
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	
	
}
