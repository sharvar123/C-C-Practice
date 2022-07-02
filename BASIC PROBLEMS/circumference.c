//cicumference of circle
#include<stdio.h>
#define pi 3.14159

int main(){
	float radius,cir;
	printf("enter radius of triangle:");
	scanf("%f", &radius);
	
	cir=2*pi*radius;
	printf("The circumference of the circle is : %f", cir);
	
	return 0;
	
}
