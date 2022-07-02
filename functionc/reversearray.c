//reverse array using function
#include<stdio.h>
void reverse_array(int *arr){
	int i,temp;
	for(i=0;i<=4;i++){
		temp=arr[i];
		arr[i]=arr[9-i];
		arr[9-i]=temp;
	}
	
}
int main(){
	int arr[10],i;
	printf("Enter 10 elements:");
	
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	reverse_array(arr);
	
	printf("\nReversed array:");
	
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	
}
