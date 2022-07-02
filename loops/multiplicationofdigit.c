//Program to calculate Product of the digits of a number 
#include<stdio.h>

int main(){
	int n,mul=1,d;
	printf("Enter number:");
	scanf("%d",&n);
	
	while(n>0){
		d=n%10;
		mul=mul*d;
		n=n/10;	
	}
	printf("%d",mul);
	
	return 0;
}
