//To calculate gross salary.
//input base salary
//HRA=60%BS
//DA=50%BS
//TA=40%BS
//GS=BS+HRA+DA+TA
//GS=BS+60%BS+50%BS+40%BS=BS+150%BS=BS+1.5*BS=2.5*BS
#include<stdio.h>

int main(){
	float base, gross;
	printf("Enter base salary:");
	scanf("%f",&base);
	
	gross=(2.5)*base;
	printf("calculated gross salary: %f",gross);
	
	return 0;
}

