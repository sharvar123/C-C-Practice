//Volume of cone
#include<stdio.h>

int main(){
	float r,h,vol;
	float pi=3.14159;
	printf("Enter radius and height of cone respectively:");
	scanf("%f%f",&r,&h);
	
	vol=(pi*r*r*h)/3;
	printf("Volume of cone:%f",vol);
	
	
	return 0;
}
