//Program to calculate the sum of digits of a number
#include<stdio.h>

int main(){
	int n,sum=0,d;
	printf("Enter number:");
	scanf("%d",&n);
	
	while(n>0){
		d=n%10;
		sum=sum+d;
		n=n/10;	
	}
	printf("%d",sum);
	
	return 0;
}
