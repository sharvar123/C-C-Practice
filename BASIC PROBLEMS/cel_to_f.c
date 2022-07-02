//celcius to f
#include<stdio.h>
#define dec 1.8
#define const 32
int main(){
	float cel,f;
	printf("enter temp in celcius:");
	scanf("%f", &cel);
	
	f= (dec*cel)+const;
	printf("The temp in fahrenheit : %f", f);
	
	return 0;
	
}
