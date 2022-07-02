/*A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user.*/

#include<stdio.h>

int main(){
	int unit, cost,dis;
	printf("Enter the number of units purchased:");
	scanf("%d",&unit);
	
	cost=unit*100;
	printf("\t\tCost before discount:\t%d\n",cost);
	if (cost>1000){
		dis=cost/10;
		cost=cost-dis;
		printf("\t\tDiscount on purchase:\t%d\n\t\tTotal Cost:\t\t%d", dis,cost);
	}
	else{
		printf("\t\tDiscount on purchase:\t0\n\t\tTotal Cost:\t\t%d", cost);
	}
	return 0;
}
