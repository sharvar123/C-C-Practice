//reverse 7 digit no.
#include<stdio.h>

int main(){
	int num,rev,d1,d2,d3,d4,d5,d6;
	printf("Enter a 7 digit number:");
	scanf("%d",&num);
	
	d1=num%10;
	num=num/10;
	
	d2=num%10;
	num=num/10;
	
	d3=num%10;
	num=num/10;
	
	d4=num%10;
	num=num/10;

	d5=num%10;
	num=num/10;
	
	d6=num%10;
	num=num/10;
		
	rev=(d1*1000000)+(d2*100000)+(d3*10000)+(d4*1000)+(d5*100)+(d6*10)+num;
	
	printf("Reversed number: %d", rev);
	
	return 0;
}
