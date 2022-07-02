//reverse 9 digit no.
#include<stdio.h>

int main(){
	int num,rev,d1,d2,d3,d4,d5,d6,d7,d8;
	printf("Enter a 9 digit number:");
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
	
	d7=num%10;
	num=num/10;
	
	d8=num%10;
	num=num/10;
		
	rev=(d1*100000000)+(d2*10000000)+(d3*1000000)+(d4*100000)+(d5*10000)+(d6*1000)+(d7*100)+(d8*10)+num;
	
	printf("Reversed number: %d", rev);
	
	return 0;
}
