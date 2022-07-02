//sum of first and last using functions
#include<stdio.h>
void sum1();

int main(){
	int arr[10],i; 
	printf("Enter 10 elements:");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	sum1(arr);	
	
}
//doubt: how to return an array 
void sum1(int *arr){
	int i,res[5];
	for(i=0;i<5;i++){
		res[i]=arr[i]+arr[9-i];
	}
	printf("The sum of elements is:");
	for(i=0;i<5;i++){
		printf("%d ",res[i]);
	}
}
