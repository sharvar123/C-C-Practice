/*Write a program to print absolute value of a number entered by user. E.g.-
	INPUT: 1        OUTPUT: 1	
	INPUT: -1        OUTPUT: 1
*/
#include<stdio.h>

int main(){
	int num;
	printf("Enter number:");
	scanf("%d", &num);
	
	if(num<0){
		num=num*(-1);
	}
	
	printf("The absolute value of the given number is: %d",num);
	
	return 0;
}
