//Volume of cylinder
#include<stdio.h>

int main(){
	float r,h,vol;
	float pi=3.14159;
	printf("Enter radius and height of cylinder respectively:");
	scanf("%f%f",&r,&h);
	
	vol=(pi*r*r*h);
	printf("Volume of cylinder:%f",vol);
	
	
	return 0;
}
