/*Write a Python program to check a triangle is . 
Note :
An equilateral triangle is a triangle in which all three sides are equal.
A scalene triangle is a triangle that has three unequal sides.
An isosceles triangle is a triangle with (at least) two equal sides.*/
#include<stdio.h>

int main(){
	int s1,s2,s3;
	printf("Enter Three sides of the triangle:\n");
	scanf("%d%d%d", &s1,&s2, &s3);
	
	if (s1==s2&&s2==s3){
		printf("The given triangle is EQUILATERAL TRIANGLE");
	}else if (s1==s2||s2==s3||s3==s1){
		printf("The given triangle is ISOCELES TRIANGLE");		
	}else{
		printf("The given triangle is SCALENE TRIANGLE");		
	}
}
