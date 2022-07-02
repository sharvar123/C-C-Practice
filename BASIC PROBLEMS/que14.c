//celcius to fahrenheit
#include<stdio.h>

int main(){
	float c,fl;
	
	printf("Enter temperature in celcius:");
	scanf("%f",&c);

	fl=((9*c)/5)+32;
	printf("%f celcius in fahrenheit is %f",c,fl);
	return 0;
}
