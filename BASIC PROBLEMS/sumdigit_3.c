//sum of all digits of a 9 digit no.
#include<stdio.h>

int main (){
	int num,sum,d1,d2,d3,d4,d5,d6,d7,d8;
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
		
	sum=d1+d2+(d3)+(d4)+(d5)+(d6)+(d7)+(d8)+num;
	
	printf("Sum of digits: %d", sum);
	
	return 0;
	
}
