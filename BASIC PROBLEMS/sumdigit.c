//add first and last digit of a nine digit no.
#include<stdio.h>

int main(){
	int num,sum,d1,d9;
	printf("Enter a 9 digit number:");
	scanf("%d",&num);
	
	d1=num%10;
	d9=num/100000000;
	
	sum=d1+d9;
	printf("sum of the first and last digit is: %d",sum);
	
	return 0;
}
