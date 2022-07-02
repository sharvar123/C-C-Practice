//Simple interest // Input: Principal amount, rate of interest, time
#include<stdio.h>

int main(){
	float pa, interest, time, si,a;
	printf("Enter principal amount:");
	scanf("%f",&pa);
	printf("Enter the rate of interest:");
	scanf("%f",&interest);
	printf("Enter time:");
	scanf("%f",&time);
	
	si=(pa*interest*time)/100;
	a=pa+si;
	printf("The final amount:%f", a);
	return 0;
	
}
