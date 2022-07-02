//Area of circle
#include<stdio.h>

int main(){
	float r, area;
	float pi=3.14159;	
	printf("Enter radius:");
	scanf("%f",&r);
	
	area=pi*r*r;
	printf("Area of circle:%f",area);
	
	
	return 0;
}
