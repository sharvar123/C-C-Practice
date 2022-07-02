/*Write a Python program to find the median of three values.
Expected Output:
Input first number: 15 
Input second number: 26 
Input third number: 29 
The median is 26.0*/
#include<stdio.h>

int main(){
	int num1, num2,num3;
	printf("Enter three numbers:\n");
	scanf("%d%d%d", &num1,&num2,&num3);
	
	if((num1<num2 && num2<num3) || (num3<num2 && num2<num1) ){
		printf("The Median is %d",num2);
	}else if((num1<num3 && num3<num2) || (num2<num3 && num3<num1)){
		printf("The Median is %d",num3);
	}else{
		printf("The Median is %d",num1);		
	}
	return 0;
}
