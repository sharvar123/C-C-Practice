/*Write a program to calculate the electricity bill (accept number of unit from user) according to the following criteria : 
Unit Price First 100 units 3.5 rs  per unit
Next 100 units Rs 5 per unit 
After 200 units Rs 10 per unit 
after that 15rs per unit
1000<   meter charge= costing 10%
		tax = costing 9%
1000>   meter charge= costing 20%
		tax = costing 18%*/
#include<stdio.h>

int main(){
	float unit, cost, met, tax, total;
	printf("Enter no. of units:");
	scanf("%f", &unit);
	
	if(unit<0)
	{
		printf("Enter valid no. of units.");	
	}else if (unit>=0 && unit<=100){
		cost=unit*3.5;
		printf("Costing for %f units:%f\n",unit,cost);
	}else if (unit>100 && unit<=200){
		cost=unit*5;
		printf("Costing for %f units:%f\n",unit,cost);
	}else if (unit>200 && unit<=400){
		cost=unit*10;
		printf("Costing for %f units:%f\n",unit,cost);
	}else{
		cost=unit*15;
		printf("Costing for %f units:%f\n",unit,cost);	
	}
	
	if(cost<=1000){
		met=cost/10;
		tax=(9*cost)/100;
		printf("Meter charge :\t%f\n",met);
		printf("Tax :\t\t%f\n",tax);
	}else{
		met=cost/5;
		tax=(18*cost)/100;
		printf("Meter charge :\t%f\n",met);
		printf("Tax :\t\t%f\n",tax);
	}
	
	total = cost+met+tax;
	printf("Total Charge:   %f",total);
}
