//add second and fourth digit of a 5 digit no.
#include<stdio.h>

int main(){
	int num,sum,d2,d4;
	printf("Enter a 5 digit number:");
	scanf("%d",&num);
	
	d2=(num/10)%10;
	d4=(num/1000)%10;
	
	sum=d2+d4;
	printf("sum : %d",sum);
	
	return 0;
}
