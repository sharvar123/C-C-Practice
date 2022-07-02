//Area of triangle
#include<stdio.h>

int main(){
	float h,b, area;
	printf("Enter base and height respectively:");
	scanf("%f%f",&h,&b);
	
	area=(h*b)/2;
	printf("Area of triangle:%f\n",area);
	
	
	return 0;
}
