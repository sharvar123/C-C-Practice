/*Write a program to accept the cost price of a bike and display the road tax to be paid according to the following criteria: 
Cost price (in Rs) 			Tax 
100000 				15 % 
> 50000 and <= 100000 		10% 
<= 50000 			5% */
#include<stdio.h>

int main(){
	float cost, tax;
	printf("Enter cost of bike:");
	scanf("%f", &cost);
	
	if (cost<0){
		printf("Invalid Input");
	}else if(cost>=0 && cost<=50000)
	{
		tax=cost/20; //5%
		printf("Road tax : %f",tax);
	}else if(cost>50000 && cost<=100000)
	{
		tax=cost/10; //10%
		printf("Road tax : %f",tax);
	}else{
		tax=(15*cost)/100; //15%
		printf("Road tax : %f",tax);	
	}
	
	return 0;
}
