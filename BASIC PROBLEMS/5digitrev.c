//reverse 5 digit no.
#include<stdio.h>

int main(){
	int num,rev,d1,d2,d3,d4;
	printf("Enter a 5 digit number:");
	scanf("%d",&num);
	
	d1=num%10;
	num=num/10;
	
	d2=num%10;
	num=num/10;
	
	d3=num%10;
	num=num/10;
	
	d4=num%10;
	num=num/10;
	
	rev=(d1*10000)+(d2*1000)+(d3*100)+(d4*10)+num;
	
	printf("Reversed number: %d", rev);
	
	return 0;
}
