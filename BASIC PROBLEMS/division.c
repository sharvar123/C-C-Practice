#include<stdio.h>

int main(){
	float num1, num2,ans; 
	
	printf("Enter dividend:");
	scanf("%f",&num1);
	printf("Enter divisor:");	
	scanf("%f",&num2);
	ans=num1/num2;
	
	printf("%f",ans);
	
	return 0;
}
