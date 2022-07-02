//add even or odd
#include<stdio.h>

int main(){
	int arr[10],odd=0,even=0,i;
	printf("Enter 10 elements:");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<9;i++){
		if(arr[i]%2==0){
			even=even+arr[i];
		}
		else{
			odd=odd+arr[i];
		}
	}
	printf("The sum of odd elements is:%d",odd);
	printf("The sum of even elements is:%d",even);
	
	return 0;
}
